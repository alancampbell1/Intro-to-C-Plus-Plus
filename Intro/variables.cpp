/*
	Variables:
	In C++ Variables are used to store data in a memory location which can be used
	or modified in the program during execution.

	Rules for declaring variables:
	- A variable name con consist of capital letters, A-Z, a-z, 0-9 and _
	- First character must be an _
	- No blank spaces
	- # or $ not allowed
	- keywords cannot be used as variable names
	- Name must be less than 31 characters in length
	- Can be int, double, bool, float, char, wchar_t, void
*/

#include <iostream>
using namespace std;

//This is an example of a global variable as it is accessible in numerous functions
int sample;

int main(){
	int x = 5;
	int y = 2;
	int result;

	result = x * y;
	cout << "Result: " << result << endl;

}
