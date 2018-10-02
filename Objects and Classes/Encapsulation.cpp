/* 
	Encapsulation is the process of hiding all the details of an object that do not
	throw in or deal with its essential details.
	It assists abstract by providing a means of suppressing the non-essential details.

	Encapsulation is achieved using access specifiers. C++ has three access specifiers:
	public, private & protected.

	Public: accessible to everyone

	Private: no one outside the class can obtain access to them

	Protected: inaccessible outside the class unless that class is a subclass.
 */

#include <iostream> 
using namespace std;

/*
	In the following example variables l and b cannot be accessed on their own
	in the main method as they are private.

	Only the methods, that use them, can access them.
*/

class rectange{
	private:
		int l, b;
	public:
		rectange(int x = 2, int y = 4)
		{
			l = x;
			b = y;
		}

		void area()
		{
			cout << "\narea is " << l * b << endl;
		}
};

int main()
{
	rectange r;
	r.area();
}


