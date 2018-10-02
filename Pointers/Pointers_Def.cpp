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

int main()
{
	int n = 20;		//standard int variable declared with a value
	int *ptr;		//pointer variable declared, pointing at nothing

	ptr = &n; 		//the pointer now points to the memory address of n

	/*
		Note: without the & symbol above, an error is thrown
	*/


	cout << *ptr << endl;	//Prints the memory address of n
	cout << ptr << endl;	//Prints the contents of n, aka 20
}