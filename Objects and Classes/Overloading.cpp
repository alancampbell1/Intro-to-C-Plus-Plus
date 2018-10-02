/*
	Overloading is a technique to use a single identifier to define various methods
	or technique of a class that differs in their input and output parameters.

	It is a concept used to avoid redundant code where the same method or operator is
	used multiple times but with different parameters or number of operands.

	It provides code clarity, reduces complexity and increases runtime.

	There are two main types: Function Overloading and Operator Overloading.

 */

#include <iostream> 
using namespace std;

/*
	Function overloading is when a class has multiple member functions with the same
	name. However, the parameters they read in are different thus making each one unique.
*/

class myObj
{
	public:
		int x, y;

		int overloaded()	{	return 0; }
		
		int overloaded(int a) 
		{
			x = a;
			return 0;
		}

		int overloaded(int a, int b)
		{
			x = a;
			y = b;
			return 0;
		}
};

int main()
{
	myObj Object1;
	Object1.overloaded(5);

	myObj Object2;
	Object2.overloaded(10, 54);
}









