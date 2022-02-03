// Name: Rio Kabar
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 9

// LEFT TO DO: 
// ADD REACHABILITY FUNCTION (? tried and didn't work lol)
// ADD FUNCTIONS 6 THROUGH 10

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Precondition: Inputted Matrix must not be empty, number of nodes and the matrix must be inputted for parameters.
//Postcondition: The returned value is the printed matrix seperated by node. 
void printMatrix(int nodes, int A1[5][5])
{
    int i;
    int j;

    cout << "Input Matrix: " << endl;
    for (i = 0; i < nodes; i++) 
    {
        for (j = 0; j < nodes; j++) 
        {
            cout << A1[i][j] << "  ";
        }
        cout << "\n";
    }

}


//Precondition: Inputted Matrix must not be empty, number of nodes and the matrix must be inputted for parameters.
//Postcondition: Transitive closure is returned with reachability matrix and printed.
void findAn(int nodes,int An[5][5], int Am[5][5], int A1[5][5])
{
    for (int i = 0; i < nodes; i++)
    { 
        for (int j = 0; j < nodes; j++)
        {
            An[i][j] = 0;    //initially copy the graph to the result matrix
        }
    }

    for (int k = 0; k < nodes; k++)
    {
        for (int i = 0; i < nodes; i++)
        { 
            for (int j = 0; j < nodes; j++)
            { 
				An[k][i] += Am[k][j] * A1[j][i];
            }
        }
    }
}

//Precondition: Matrix must not be empty, number of nodes and the matrix must be inputted for parameters.
//Postcondition: The returned value is the number Indegrees ofthe  matrix to be printed.
void inDegrees(int nodes, int A1[5][5])
{
    int i;
    int j;
    int sum;

    // calculate indegree of each of the nodes in the matrix 
    cout << "In-degrees: " << endl;
    for (i = 0; i < nodes; i++) {
        cout << "Node " << i + 1 << " in-degree is ";     // prints the indegree of the current node
        sum = 0;
        for (j = 0; j < nodes; j++)
            sum += A1[j][i];
        cout << sum << endl;
    }

    cout << endl;

}

//Precondition: Matrix must not be empty, number of nodes and the matrix must be inputted for parameters.
//Postcondition: The returned value is the number of outdegrees of the matrix to be printed.
void outDegrees(int nodes, int A1[5][5])
{
    int i;
    int j;
    int sum;

    // calculate outdegree of each of the nodes in the matrix 
    cout << "Out-degrees: " << endl;
    for (i = 0; i < nodes; i++) {
        cout << "Node " << i + 1 << " in-degree is ";   // prints the outdegree of the current node
        sum = 0;
        for (j = 0; j < nodes; j++)
            sum += A1[i][j];
        cout << sum << endl;
    }
    cout << endl;
}

//Precondition: Matrix must not be empty, number of nodes and the matrix must be inputted for parameters.
//Postcondition: The returned value is the number of self loops in the matrix to be printed.
void selfLoops(int nodes, int A1[5][5])
{
    int i;
    int sum = 0;

    // calculate total number of self loop
    cout << "Total number of self-loops: ";
    for (i = 0; i < nodes; i++) {
        sum += A1[i][i];
    }
    cout << sum << endl;
}

void cyclesLength(int nodes, int A1[5][5])
{
    
}

int main() {
    int choice = 0;
    int inputmode = 0;
    int nodes;
    int i;
    int j;

    int A1[5][5] = { 0 };
    int A2[5][5] = { 0 };
    int A3[5][5] = { 0 };
    int A4[5][5] = { 0 };
    int A5[5][5] = { 0 };


    while (1) 
    {
        cout << "---MAIN MENU---------" << endl;
        cout << "1 - Enter Graph Data" << endl;
        cout << "2 - Print Outputs" << endl;
        cout << "3 - Exit Program" << endl;
        cout << "Enter option number: ";
        cin >> choice;

        if (choice == 3)
            break;
        else if (choice == 1) {
            // take input of nodes
            cout << "Enter the no of nodes: ";
            cin >> nodes;
            // take input of A1
            for (i = 0; i < nodes; i++) {
                for (j = 0; j < nodes; j++) {
                    cout << "Enter A1[" << i << ", " << j << "]: ";
                    cin >> A1[i][j];
                }
            }

            cout << "\n";

            // set output mode as 1 to indicate input has been taken 
            inputmode = 1;
        }
        else if (choice == 2) {
            if (inputmode == 0) {
                cout << "\nError: Graph data not found! Please enter graph data first.\n" << endl;
                continue;
            }

            printMatrix(nodes, A1);

            cout << "\n";

            if(nodes >= 2){
				findAn(nodes, A2, A1, A1);
				printMatrix(nodes, A2);
				if(nodes >= 3){
					findAn(nodes, A3, A2, A1);
					printMatrix(nodes, A3);
				}
				if(nodes >= 4){
					findAn(nodes, A4, A3, A1);
					printMatrix(nodes, A4);
				}
				if(nodes == 5){
					findAn(nodes, A5, A4, A1);
					printMatrix(nodes, A5);
				}
			}


            cout << "\n";

            inDegrees(nodes, A1);

            cout << "\n";

            outDegrees(nodes, A1);

            cout << "\n";
            
            selfLoops(nodes, A1);

            cout << "\n";

            // reset value for outputmode
            inputmode = 0;

        }
        else
            cout << "Error! Wrong Input" << endl;
    }

}