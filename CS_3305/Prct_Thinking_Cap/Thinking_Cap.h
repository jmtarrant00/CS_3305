#ifndef THINKING_CAP_H
#define THINKING_CAP_H
#include <string>

using namespace std;

class Thinking_Cap
{
public:
	Thinking_Cap();
	Read_Green(string green);
	Read_Red(string red);
	~Thinking_Cap();
private:
	set_green(string green);
	set_red(string red);
	string green;
	string red;

};

#endif // THINKING_CAP_H
