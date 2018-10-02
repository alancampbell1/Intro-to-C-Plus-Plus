/*
	C++ has a special type of constructor which takes an object as an argument and
	uses this to copy values of data members from one object into another.
 */

#include <iostream> 
using namespace std;


class myObj{
	int a, b;

	public:
		myObj(int x, int y)
		{
			a = x;
			b = y;
			cout << "\nHere is the intialisation constructor";
		}
		void Display()
		{
			cout << "\nValues : \t" << a << "\t" << b << endl;
		}
};


int main()
{
	//Object created with data passed to parameterised constructor
	myObj initialObj1(30, 40);

	//Copy Constructor initialised, a new object is created and the data from
	//the first object is passed into the second
	myObj initialObj2 = initialObj1;

	//Displays the same information
	initialObj1.Display();
	initialObj2.Display();
}









