/*
 * C++ also supports switch statements 
 *
 */


#include <iostream> 
using namespace std;

int main()
{
	int a = 5;

	switch(a)
	{
		case 1:
		cout << "a is 1" << endl;
		break;

		case 2:
		cout << "a is 2" << endl;
		break;

		case 3:
		cout << "a is 3" << endl;
		break;

		case 4:
		cout << "a is 4" << endl;
		break;

		case 5:
		cout << "a is 5" << endl;
		break;

		default:
		cout << "something else" << endl;
		break;
	}
}