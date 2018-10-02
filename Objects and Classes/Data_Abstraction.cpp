/* 
	Data Abstraction allows a program to ignore the details of how a data type is 
	represented. 
	Abstract classes in C++ is a class not to be used to create objects. These classes
	are designed to be inherited from other classes. 

	Advantages of Data Abstraction:
	- Class internals are protected from inadvertent user level errors.
	- Programmers do not have to re-write code or low level code on a regular basis.
	- Helps provide structure conformity.

 */

#include <iostream> 
using namespace std;

/*
*/

class sample
{
	public:
		int a, b;

	public:
		void val()
		{
			cout << "Enter two values" << endl;
			cin >> a;
			cin >> b;
		}
		void display()
		{
			cout << a << " " << b;
			cout << endl;
		}
};


int main()
{
	sample s;
	s.val();
	s.display();
}


