#include <iostream>
#include <cstdlib>
#include "Thinking_Cap.h"

Thinking_Cap::Thinking_Cap() {
	
}

Thinking_Cap::Read_Green(string g) {
	cout << g << "\n" << endl;
	return EXIT_SUCCESS;
}

Thinking_Cap::Read_Red(string r) {
	cout << r << "\n" << endl;
	return EXIT_SUCCESS;
}

Thinking_Cap::set_green(string g) {
	green = g;
	return EXIT_SUCCESS;
}

Thinking_Cap::set_red(string r) {
	red = r;
	return EXIT_SUCCESS;
}

Thinking_Cap::~Thinking_Cap()
{
}

