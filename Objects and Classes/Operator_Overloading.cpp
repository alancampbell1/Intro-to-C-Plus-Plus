/*
	Operator Overloading is a type of polymorphism where a single operator, e.g. + -, 
	is overloaded, i.e. meaning changed, to give it user defined meaning.

	In the following example, the - operator before an object changes two of the
	objects values, a and b, to negative values, before being passed back to a
	parameterised constructor.

	This is a flexible option for creating new definitions of C++ operations. 
 */

#include <iostream> 
using namespace std;

/*
*/

class MinusOverload
{
	private:
		int a;
		int b;

	public:

		//Constructor that reads in two values and sets them accordingly.
		MinusOverload(int x, int y)
		{
			int c;
			a = x;
			b = y;
			c = a - b;
			cout << "\nC:" << c << endl;
		}
		//function that resets variables a and b back to zero.
		void distance()
		{
			a = 0;
			b = 0;
		}
		//Function to display the contents of a and b.
		void display()
		{
			cout << "A: " << a << " B: " << b << endl;
		}

		/*
			Overloading operator,-, sets values in 'a' and 'b' to minus figures
			and calls the parameterised constructor passing the new negative
			figures accordingly.
		*/
		MinusOverload operator-()
		{
			a = -a;
			b = -b;
			return MinusOverload(a, b);
		}
};

int main()
{
	//Two objects created
	MinusOverload m1(6, 8), m2(-3, -4);
	//values in the m1 object are set to minus digits and set to the constructor
	-m1;
	//The new information is displayed.
	m1.display();
}


