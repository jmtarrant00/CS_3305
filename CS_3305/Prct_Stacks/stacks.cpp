#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> grades;
	grades.push(85);
	grades.push(90);
	grades.push(70);
	while(!grades.empty()) {
		cout << "top()  => " << grades.top() << endl;
		cout << "size() => " << grades.size() << endl;
		cout << endl;
		grades.pop(); 
	}
}