#ifndef THROTTLE_H
#define THROTTLE_H

class Throttle
{
public:
	// CONSTRUCTOR
	Throttle();
	Throttle(int size);
	// MODIFICATION MEMBER FUNCTIONS
	void shut_off() { position = 0; };
	void shift(int amount);
	~Throttle();
	
	// CONSTANT MEMBER FUNCTIONS
	double flow() const { return position / double(top_position); };
	bool is_on() const { return (position > 0);	};
private:
	int top_position;
	int position;

};

#endif // THROTTLE_H
