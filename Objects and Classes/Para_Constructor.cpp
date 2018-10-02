/*
	Programmers can add parameters to a constructor to intialise local variables.
 */

#include <iostream> 
using namespace std;

class calculation
{
	
public:
		int val2;
		calculation(int x)
		{
			val2 = x;
		}
};

int main()
{
	calculation myObj(10);
	cout << myObj.val2 << endl;
}









