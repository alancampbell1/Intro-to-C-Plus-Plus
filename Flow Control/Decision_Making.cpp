/*
 * C++ Conditional Statements allow you to make a decision based upon the result of
 * a condition.
 *
 * C++ supports if, if else and else if statements.
 */


#include <iostream> 
using namespace std;

int main()
{
	int a = 15, b = 20;

	//Basic if statement
	if(b > a){
		cout << "b is greater than a" << endl;
	}

	int c = 10, d = 25;

	//Basic if else statement
	if(c > d){
		cout << "c is greater than d" << endl;
	}
	else{
		cout << "d is greater than c" << endl;
	}

	//else if statement
	if(a < c){
		cout << "c is greater than a" << endl;
	}
	else if(b < c){
		cout << "b is less than c" << endl;
	}
	else{
		cout << "something else" << endl;
	}
}