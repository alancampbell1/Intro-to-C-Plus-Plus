/*
	A qualifier is a token that adds extra quality to a variable. They specify something
	about how a variable can be accessed or where it can be stored.

	Three main qualifiers in C++:

	const: Used to define the type as constant, cannot be changed.

	volatile: Used to define that the type is volatile.

	mutable: Applies to non-static class members of the non-reference non-const type.
*/

/*
	Storage Class in C++:
	Used to classify the lifetime and scope of variables. It tells how storage is
	allocated for variables and how a variable can be treated by the compiler.

	There are four main types: Auto variables, Register variables, static variables and
	Extern variables.
*/

#include <iostream> 
using namespace std;

int main(){
	/*
		auto:
		This is the default storage class that C++ uses. It is applied to local variables
		and variables only visible within the function it is declared within.
		It is terminated as soon as the function execution is completed and contains
		garbage values if they are not assigned anything.
	*/

	int var1;
	auto int var2;

	/*
		register:
		This is used to classify local variables that get stored in the CPU register instead
		of primary memory (RAM).
		It is used for variables that require quick access such as counters.
	*/

	register int var3;

	/*
		static:
		The scope of a static variable is local to the function in which it gets defined.
		It doesn't get terminated when the function execution gets over. The static storage
		class tells the compiler to keep the local variable in existance during the lifetime
		of the program instead of destroying it when the function scope ends.
		They also have a default value of 0.
	*/

	static int var4;

	/*
		extern:
		Variables that have an extern storage class have a global scope. They are used
		when programmers want a variable to be visible outside the file in which to 
		declare it. This way it can be used across multiple files. They end when the
		program gets executed.
	*/

	extern int var5;

}