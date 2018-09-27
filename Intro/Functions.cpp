/*
	C++ Functions:
	Functions in C++ are referred to as Member Functions. 

	Member functions are C++ functions that have their declarations inside a class
	definition and these member functions work on the data member of the class.

	They can be defined inside or outside a class.
	If declared inside a class: it can define directly.
	If declared outside a class: A special operator name scope resolution operator (::)
	is used along with the name of the class and function name.
*/

#include <iostream>

using namespace std;

class sq{
public:
	int a;
	int square();

};

int sq:: square(){
	return a * a;
}


/*
	Types of Member Functions:
	Simple Member Function:
	These are simple functions with or without a return type and with/without parameters

	Static Member Function:
	Keyword 'static' used. Static used to hold its position. Note: static member functions
	cannot access ordinary data members and member functions, they must also be static

	Const Member Function:
	This means once the variable is defined, its value cannot be changed.

	Inline Function:
	When a function is declared as inline, the compiler places a copy of the code of a
	specific function at each point where the function is called at compile time.

	Friend Function:
	Functions declared as friend give private access to non-class functions. Programmers
	can declare a global function as a friend.



*/