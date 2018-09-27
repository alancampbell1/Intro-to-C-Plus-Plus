/*
	The storage class is used to specify control two different properties: storage lifetime
	and scope(visibility) of variables
*/


/*
	External variables are defined outside of the function. Once an external variable
	is declared, the variable can be used in any line of code throughout the rest
	of the program.

	You do not need to create a .out file of second_file.cpp
*/

#include <iostream>
#include "second_file.cpp"

int count;
extern void write_extern();


int main(){

	//auto is the same local varibles. Both are the same.
	auto int a, b, c = 100;
	int d, e, f;

	write_extern();

}