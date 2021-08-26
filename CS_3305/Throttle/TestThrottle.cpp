#include <iostream>
#include <cstdlib>
#include "Throttle.h"

using namespace std;

int main() {
	Throttle control(6);
	int user_input;
	
	// Set the sample throttle to a position indicated by the user
	cout << "I have a throttle with 6 positions. \n";
	cout << "Where would you like to set the throttle? \n";
	cout << "Please type a number from 0 to 6: " << endl;
	cin >> user_input;
	control.shut_off();
	control.shift(user_input);
	
	// Shift the throttle down to zero, printing the flow along the way.
	while (control.is_on()) {
		cout.precision(2);
		cout << "The flow is now " << control.flow() << endl;
		control.shift(-1);
	}
	cout << "The flow is now off" << endl;
	return EXIT_SUCCESS;
}