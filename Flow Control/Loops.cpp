/*
 * Loops are necessary to execute a statement several times.
 * C++ supports various types of loops: while loops, do while loops and for loops
 *
 */


#include <iostream> 
using namespace std;

int main()
{
	//Basic While Loop
	int x = 0;
	while(x < 5){
		cout << "x is ";
		cout << x << endl;
		x++;
	}

	//Basic Do While Loop
	int a = 5;
	do{
		cout << "a is ";
		cout << a << endl;
		a--;
	}while(a > 0);

	//Basic For Loop
	for(int i = 0; i < 5; i++){
		cout << "I am in a for loop ";
		cout << i << endl;
	}
}