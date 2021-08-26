#include <iostream>
#include <cstdlib>
#include "Thinking_Cap.h"

using namespace std;

int main() {
	// initialize the cap and the variables
	Thinking_Cap cap1;
	string user_green;
	string user_red;
	string btn;
	string cont = "go";
	
	// take the user input for the strings
	cout << "Green Slot? " << endl;
	cin >> user_green;
	cout << "Red Slot? " << endl;
	cin >> user_red;
	
	while (cont != "Done") {
		cout << "Which color do you want to press? \n";
		cout << "If you are done, type 'done'" << endl;
		cin >> btn;
		if (btn == "green" ) {
			cap1.Read_Green(user_green);
		} else if (btn == "red") {
			cap1.Read_Red(user_red);
		}
	}
}