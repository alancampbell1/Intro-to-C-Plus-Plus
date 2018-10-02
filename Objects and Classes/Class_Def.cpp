/*
	Benefits of using Pointers in C++:
	- They save memory
	- They reduce the length and complexity of a program.
	- They allow the passing of arrays and strings to functions more efficiently.
	- They make it possible to return more than one value from a function.
	- They increase processing speed.
 */


#include <iostream> 
using namespace std;


/*
	Variables can be grouped together on how visible they are to being accessed from
	outside the class.
	Public, Protected and Private

	Remember to end the class with a ;
*/

class Box
{
	public:
		double length;
		double width;
		double height;
};

/*
	In the main method we create an object of the class 'Box' called Box1. We can then
	assign values to the variables associated with this particular object like so.
*/

int main()
{
	Box Box1;
	Box1.length = 10;
	Box1.width = 5;
	Box1.height = 2;

	int length = 12;	//Note: this length is completely separate to Box1.length


	cout << Box1.length << endl;
	cout << Box1.width << endl;
	cout << Box1.height << endl;
}









