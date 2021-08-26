#include <cassert>
#include <iostream>
#include "Throttle.h"

using namespace std;

Throttle::Throttle() {
	top_position = 1;
	position = 0;
}

Throttle::Throttle(int size) {
	assert(0 < size);
	top_position = size;
	position = 0;
}

void Throttle::shift(int amount) {
	position += amount;
	if (position < 0)
		position = 0;
	else if (position > top_position)
		position = top_position;
}

Throttle::~Throttle()
{
}

