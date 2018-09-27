/*
 	Data Types:
 	Information is stored in a computer's memory with different data types.
 	When a variable is declared it becomes necessary to define a data type,
 	i.e. what type of data can it hold.
	

	The following example will produce the size of the various data types 
	on a PC
 */

#include <iostream>
using namespace std;

int main(){
	cout << "Size of char is " << sizeof(char) << endl;
	cout << "Size of int is " << sizeof(int) << endl;
	cout << "Size of float is " << sizeof(float) << endl;
	cout << "Size of short is " << sizeof(short) << endl;
	cout << "Size of long is " << sizeof(long) << endl;
	cout << "Size of double is " << sizeof(double) << endl;
	cout << "Size of wchar_t is " << sizeof(wchar_t) << endl;


	/*
		The keyword 'enum' is used to create enumerated data type. This is a user-defined
		data type having a finite set of enumeration constants.
	*/

	enum{
			SHEEP,
			COW,
			DONKEY,
			FISH
	};

	//This will print '1' as COW is element 1 in the list.
	cout << COW << endl;

	/*
		typedef is sed to either create a new data type or change the name of an already
		existing data type.
		In the following example, int is changed to newDataType

	*/

	typedef int newDataType;
	newDataType myNum = 5;
	cout << myNum << endl;

	return 0;
}




