// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 7

#include <cstdlib>
#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
#include <cmath>

using namespace std;

void printMenu();

int getInput();

void fillTable(int table[][2]);

void printTable(int table[][2]);

void sumProbes(int table[][2]);

void hf1(int table[][2], int keys[]);

void hf2(int table[][2], int keys[]);

void hf3(int table[50][2], int keys[]);

int h2(int key);

void hf4(int *table[50][2], int keys[]);

int main() {
	int choice = 0;
	int Table1[50][2];
	int Table2[50][2];
	int Table3[50][2];
//	int *Table4[50][2];
	int keys[50] = { 1234, 8234, 7867, 1009, 5438, 4312, 3420, 9487, 5418, 5299,
		5078, 8239, 1208, 5098, 5195, 5329, 4543, 3344, 7698, 5412,
		5567, 5672, 7934, 1254, 6091, 8732, 3095, 1975, 3843, 5589,
		5439, 8907, 4097, 3096, 4310, 5298, 9156, 3895, 6673, 7871,
		5787, 9289, 4553, 7822, 8755, 3398, 6774, 8289, 7665, 5523 };
	do {
		printMenu();
		choice = getInput();
		switch (choice) {
			case 1:
				cout << "Choice: " << choice << endl;
				fillTable(Table1);
				hf1(Table1, keys);
				break;
			case 2:
				cout << "Choice: " << choice << endl;
				fillTable(Table2);
				hf2(Table2, keys);
				break;
			case 3:
				cout << "Choice: " << choice << endl;
				fillTable(Table3);
				hf3(Table3, keys);
				break;
			case 4:
				cout << "Choice: " << choice << endl;
				break;
			case 5:
				cout << "Exiting Program..." << endl;
				break;
			default:
				cout << "Please input a valid choice (1-5)" << endl;
				break;
		}
	} while (choice != 5);
}

void printMenu() {
	cout << endl;
	cout << "-----MAIN MENU---------------------------------" << endl;
	cout << "1: HF1 (Division Method with Linear Probing)" << endl;
	cout << "2: HF2 (Division Method with Quadratic Probing)" << endl;
	cout << "3: HF3 (Division Method with Double Hashing)" << endl;
	cout << "4: HF4 (Student Defined Function)" << endl;
	cout << endl;
	cout << "Please select an option: ";
}

int getInput() {
	string command = "";
	int number = 0;
	getline(cin, command); // Take the entire line as input
	for(size_t i = 0; i < command.length(); i++) {
		if(!isdigit(command[i])) { 
			// if there is a non-int in the input, return 0
			return number;
		}
	}
	number = stoi(command); // convert the number string to an int
	return number;
}

void fillTable(int table[][2]) {
	for (int i=0; i<50; i++) {
		table[i][1] = -1;
		table[i][2] = 0;
	}
}

void printTable(int table[][2]) {
	cout << "Index     Key     probes" << endl;
	cout << "----------------------------" << endl;
	for(int i=0; i<50; i++) {
		cout << "  " << i << "       " << table[i][1] << "        " << table[i][2] << endl;
	}
}

void sumProbes(int table[][2]) {
	int probesSum = 0;
	for (int i=0; i<50; i++) {
		probesSum += table[i][2];
	}
	cout << "Sum of probe values = " << probesSum << endl;
}

void hf1(int table[][2], int keys[]) {
	int hash, probes = 0;
	bool empty = false;
	for (int i=0; i<50; i++) {
		probes = 0;
		hash = keys[i] % 50;
		do {
			if (table[hash][1] != -1) {
				empty = false;
				hash += 1;
				if (hash > 50) {
					hash = 0;
					continue;
				}
				probes++;
			} else {
				empty = true;
				table[hash][1] = keys[i];
				table[hash][2] = probes;
			}
		} while (!empty);
	}
	
	printTable(table);
	sumProbes(table);
}

void hf2(int table[][2], int keys[]) {
	int hash, probes = 0;
	bool empty = false;
	for (int i=0; i<50; i++) {
		probes = 0;
		hash = keys[i] % 50;
		do {
			hash = (int)(hash + pow(probes, 2)) % 50;
			if (table[hash][1] != -1) {
				empty = false;
				probes++;
			} else {
				empty = true;
				table[hash][1] = keys[i];
				table[hash][2] = probes;
			}
		} while (!empty);
	}
	printTable(table);
	sumProbes(table);
}

void hf3(int table[][2], int keys[]) {
	int hash, probes = 0, unhashed = 0;
	bool empty = false;
	bool hashed = true;
	for (int i=0; i<50; i++) {
		probes = 0;
		hash = keys[i] % 50;
		do {
//			cout << "Hash: " << hash << endl;
			if (table[hash][1] != -1) {
				empty = false;
				hash = (hash + ((probes + 1) * h2(keys[i]))) % 50;
				if (probes > 50) {
					cout << "Could not hash key " << keys[i] << " to the table" << endl;
					hashed = false;
					unhashed++;
					break;
				}
				probes++;
			} else {
				empty = true;
				hashed = true;
				table[hash][1] = keys[i];
				table[hash][2] = probes;
			}
		} while (!empty);
	}
	
	printTable(table);
	sumProbes(table);
}

int h2(int key) {
	return ( 30 - key % 25);
}