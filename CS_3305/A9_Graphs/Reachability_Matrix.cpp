// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 7

#include <cstdlib>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

void printMenu();

int getInput();

int getSize();

void getMatrix(int matrix[5][5], int size);

void printMatrix(int matrix[5][5], int size);

void calcReachMatrix(int matrixN[5][5], int matrix1[5][5], int matrix2[5][5], int size);

void reachabilityMatrix(int reachMatrix[5][5], int A1[5][5], int A2[5][5], int A3[5][5], int A4[5][5], int A5[5][5], int size);

void inDegree(int matrix[5][5], int size);

void outDegree(int matrix[5][5], int size);

void loops(int matrix[5][5], int size);

void cycles(int matrix[5][5], int size);

void pathsOneEdge(int matrix[5][5], int size);

void pathsNEdge(int matrix[5][5], int size);

void pathsOneToN(int matrix[5][5], int size);

void cyclesOneToN(int matrix[5][5], int size);


int main() {
	int choice;
	int numNodes = 0;
	
	int A1[5][5] = { 0 };
    int A2[5][5] = { 0 };
    int A3[5][5] = { 0 };
    int A4[5][5] = { 0 };
    int A5[5][5] = { 0 };
	int reachMatrix[5][5] = { 0 };
	
	do {
		printMenu();
		choice = getInput();
		cout << endl;
		switch(choice) {
			case 1: {
				cout << "----- Enter Graph Data -----" << endl;
				cout << endl;
				numNodes = getSize();
				cout << "Matrix Size: " << numNodes << endl;
				getMatrix(A1, numNodes);
				if (numNodes >=2) {
					calcReachMatrix(A2, A1, A1, numNodes);
					if (numNodes >= 3) {
						calcReachMatrix(A3, A2, A1, numNodes);
					}
					if (numNodes >= 4)  {
						calcReachMatrix(A4, A3, A1, numNodes);
					}
					if (numNodes == 5) {
						calcReachMatrix(A5, A4, A1, numNodes);
					}
				}
			}
			case 2:
				cout << "----- Print Graph Outputs -----" << endl;
				cout << "\nInput Matrix:" << endl;
				printMatrix(A1, numNodes);
				cout << "\nReachability Matrix:" << endl;
				reachabilityMatrix(reachMatrix, A1, A2, A3, A4, A5, numNodes);
				cout << "\nIn-Degrees: " << endl;
				inDegree(A1, numNodes);
				cout << "\nOut-Degrees: " << endl;
				outDegree(A1, numNodes);
				cout << "Total Number of self loops: ";
				loops(A1, numNodes);
				switch(numNodes) {
					case 2:
						cout << "Total Number of Cycles of Length " << numNodes << " edges: ";
						cycles(A2, numNodes);
						cout << "Total Number of Paths of Length 1 edge: ";
						pathsOneEdge(A1, numNodes);
						cout << "Total Number of Paths of Length " << numNodes << " edges: ";
						pathsNEdge(A2, numNodes);
						cout << "Total Number of Paths of Length 1 to " << numNodes << " edges: ";
						pathsOneToN(reachMatrix, numNodes);
						cout << "Total Number of Cycles of Length 1 to " << numNodes << " edges: ";
						cyclesOneToN(A2, numNodes);
						break;
					case 3:
						cout << "Total Number of Cycles of Length " << numNodes << " edges: ";
						cycles(A3, numNodes);
						cout << "Total Number of Paths of Length 1 edge: ";
						pathsOneEdge(A1, numNodes);
						cout << "Total Number of Paths of Length " << numNodes << " edges: ";
						pathsNEdge(A3, numNodes);
						cout << "Total Number of Paths of Length 1 to " << numNodes << " edges: ";
						pathsOneToN(reachMatrix, numNodes);
						cout << "Total Number of Cycles of Length 1 to " << numNodes << " edges: ";
						cyclesOneToN(A3, numNodes);
						break;
					case 4:
						cout << "Total Number of Cycles of Length " << numNodes << " edges: ";
						cycles(A4, numNodes);
						cout << "Total Number of Paths of Length 1 edge: ";
						pathsOneEdge(A1, numNodes);
						cout << "Total Number of Paths of Length " << numNodes << " edges: ";
						pathsNEdge(A4, numNodes);
						cout << "Total Number of Paths of Length 1 to " << numNodes << " edges: ";
						pathsOneToN(reachMatrix, numNodes);
						cout << "Total Number of Cycles of Length 1 to " << numNodes << " edges: ";
						cyclesOneToN(A4, numNodes);
						break;
					case 5:
						cout << "Total Number of Cycles of Length " << numNodes << " edges: ";
						cycles(A5, numNodes);
						cout << "Total Number of Paths of Length 1 edge: ";
						pathsOneEdge(A1, numNodes);
						cout << "Total Number of Paths of Length " << numNodes << " edges: ";
						pathsNEdge(A5, numNodes);
						cout << "Total Number of Paths of Length 1 to " << numNodes << " edges: ";
						pathsOneToN(reachMatrix, numNodes);
						cout << "Total Number of Cycles of Length 1 to " << numNodes << " edges: ";
						cyclesOneToN(A5, numNodes);
						break;
				}
				break;
			case 3:
				cout << "Exiting Program... " << endl;
				break;
			default:
				cout << "Please enter a valid value (1-3)" << endl;
				break;
		}
	} while (choice != 3) ;
	return EXIT_SUCCESS;
}


void printMenu() {
	cout << "\n-----Main Menu-------" << endl;
	cout << "1 - Enter Graph Data" << endl;
	cout << "2 - Print Graph Outputs" << endl;
	cout << "3 - Exit Program" << endl;
	cout << endl;
	cout << "Please select an option: ";
}

int getInput() {
	string command = "";
	int number = 0;
	cin.clear();
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

int getSize() {
	int numNodes;
	do {
		cout << "Please enter the number of nodes: ";
		numNodes = getInput();
		if (numNodes <= 0 || numNodes > 5) {
			cout << "Please enter a number between 0 and 5" << endl;
		}
	} while (numNodes <= 0 || numNodes > 5);
	
	return numNodes;
}

void getMatrix(int matrix[5][5], int size){
//	for (int i=0; i<size; i++){
//		matrix[i] = new int[size];
//	}
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			cout << "Enter A1[" << i << "," << j << "]: ";
			matrix[i][j] = getInput();
		}
	}
}

void printMatrix(int matrix[5][5], int size) {
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			cout << matrix[i][j] << "  ";
			if (j == (size - 1)) {
				cout << endl;
			}
		}
	}
}

void calcReachMatrix(int matrixN[5][5], int matrix1[5][5], int matrix2[5][5], int size) {
	for (int i = 0; i < size; i++) { 
        for (int j = 0; j < size; j++) {
            matrixN[i][j] = 0;    //initially copy the graph to the result matrix
        }
    }
	for (int k=0; k<size; k++) {
		for (int i=0; i<size; i++){
			for (int j=0; j<size; j++){
				matrixN[k][i] += matrix1[k][j] * matrix2[j][i];
			}
		}
	}
}

void reachabilityMatrix(int reachMatrix[5][5], int A1[5][5], int A2[5][5], int A3[5][5], int A4[5][5], int A5[5][5], int size) {	
	for (int k=0; k<size; k++){
		for (int i=0; i<size; i++) {
			for (int j=0; j<size; j++) {
				reachMatrix[i][j] = A1[i][j] + A2[i][j] + A3[i][j] + A4[i][j] + A5[i][j];
			}
		}
	}
	printMatrix(reachMatrix, size);
}

void inDegree(int matrix[5][5], int size) {
	int inDeg = 0;
	for(int i=0; i<size; i++) {
		cout << "Node " << i + 1 << " in-degree is ";
		for(int j=0; j<size; j++) {
			inDeg += matrix[j][i];
		}
		cout << inDeg << endl;
		inDeg = 0;
	}
}

void outDegree(int matrix[5][5], int size) {
	int outDeg = 0;
	for(int i=0; i<size; i++) {
		cout << "Node " << i + 1 << " in-degree is ";
		for(int j=0; j<size; j++) {
			outDeg += matrix[i][j];
		}
		cout << outDeg << endl;
		outDeg = 0;
	}
}

void loops(int matrix[5][5], int size) {
	int numLoops = 0;
	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++) {
			if (i == j && matrix[i][j] == 1) {
				numLoops++;
			}
		}
	}
	cout << numLoops << endl;
}

void cycles(int matrix[5][5], int size) {
	int numCycles = 0;
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			if (i == j && matrix[i][j] == 1) {
				numCycles++;
			}
		}
	}
	cout << numCycles << endl;
}

void pathsOneEdge(int matrix[5][5], int size) {
	int numPaths = 0;
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			if (matrix[i][j] == 1) {
				numPaths++;
			}
		}
	}
	cout << numPaths << endl;
}

void pathsNEdge(int matrix[5][5], int size) {
	int numPaths = 0;
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			if (matrix[i][j] == 1) {
				numPaths++;
			}
		}
	}
	cout << numPaths << endl;
}

void pathsOneToN(int matrix[5][5], int size) {
	int numPaths = 0; 
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			if (matrix[i][j] == 1) {
				numPaths += matrix[i][j];
			}
		}
	}
	cout << numPaths << endl;
}

void cyclesOneToN(int matrix[5][5], int size) {
	int numCycles = 0;
	
	cout << numCycles << endl;
}