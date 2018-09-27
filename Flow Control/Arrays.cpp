/*
 * An array is a data structure in C++ that can store a fixed size sequence of
 * elements of the same data type.
 *
 * An array type can be any valid C++ data types and array size must be an integer
 * constant greater than zero.
 */


#include <iostream> 
using namespace std;

int main()
{
	int myArray[5];		//An int array with 5 blank elements

	int anotherArray[5] = {22, 25, 45, 12, 66};		//int array with 5 elements populated

	//This returns the total number of bytes allocated to the Array
	int x = sizeof(anotherArray);

	//This equation returns the amount of elements in the Array
	int size = sizeof(anotherArray)/sizeof(anotherArray[0]);

	cout << size << endl;
}