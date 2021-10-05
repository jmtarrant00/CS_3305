// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4

#include <cassert> // Provides assert
#include <cctype> // Provides isalpha, toupper
#include <cstdlib> // Provides EXIT_SUCCESS
#include <iostream> // Provides cout, cin, peek
#include <queue> // Provides the queue template class
#include <stack> // Provides the stack template class
#include <limits>
#include <string>
#include <sstream>

using namespace std;

void printMenu();

template<class Item> void lblPali(queue<Item> q, stack<Item> s);
template<class Item1> void print(stack<Item1> prt);

int main() {
	queue<char> q;
	stack<char> s;
	queue<string> qStr;
	stack<string> sStr;
	char letter;
	string sentence;
	string word;
	int choice;
	
	do {
		printMenu();
		cout << "Please choose an option: ";
		cin >> choice;
		cout << endl;
		switch(choice) {
			case 1:
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
				cin.clear();
				cout << "Enter a line to test if it's a palindrome:" << endl;
				while (cin.peek( ) != '\n') {
					cin >> letter;
					if (isalpha(letter)) {
						q.push(toupper(letter));
						s.push(toupper(letter));
					}
				}
				cout << "Your Selection: Option 1" << endl;
				cout << "You Entered:    ";
				print(s);
				cout << endl;
				lblPali(q, s);
				break;
			case 2:
//				word = "";
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
				cin.clear();
				cout << "Enter a sentence to test if it's a palindrome (press enter twice): " << endl;
				cout << "Your Selection: Option 2" << endl;
				while (cin.peek() != '\n') {
					getline(cin, sentence);
				}
				cout << "sentence: " << sentence << endl;
				for (size_t i = 0; i < sentence.length(); i++) {
					cout << "char at " << i << ": " << sentence.at(i) << endl;
					if (isspace(sentence.at(i))) {
						cout << "Push" << endl;
						qStr.push(word);
						sStr.push(word);
						word = "";
					} else if (sentence[i] == ',') {
						continue;
					} else {
						word = word + sentence[i];
						cout << "Word: " << word << endl;
					}
				}
				lblPali(qStr, sStr);
				break;
			case 3:
				cout << "Exiting Program... " << endl;
				break;
		} 
	} while (choice != 3);
}

void printMenu() {
	cout << "\n";
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Test Function character-by-character palindrome" << endl;
	cout << "2: Test Function word-by-word palindrome" << endl;
	cout << "3: Exit Program" << endl;

}

template<class Item> void lblPali(queue<Item> q, stack<Item> s) {
	queue<char>::size_type mismatches = 0; // Mismatches between queue and stack
	while ((!q.empty( )) && (!s.empty( ))) {
//		cout << "Queue: " << q.front() << endl;
//		cout << "Stack: " << s.top() << endl;
		if (q.front( ) != s.top( ))
			++mismatches;
		q.pop( );
		s.pop( );
	}
	cout << "Mismatches: " << mismatches << endl;
	if (mismatches == 0) {
		cout << "Judgement:      Your line is a palindrome";
	} else {
		cout << "Judgement:      Your line isn't a palindrome";
	}	
}

template<class Item1> void print(stack<Item1> prt) {
	stack<Item1> store;
	Item1 temp;
	while (!prt.empty()) {
		temp = prt.top();
		store.push(temp);
		prt.pop();
	}
	while(!store.empty()) {
		temp = store.top();
		cout << temp << " ";
		store.pop();
		prt.push(temp);
	}
}