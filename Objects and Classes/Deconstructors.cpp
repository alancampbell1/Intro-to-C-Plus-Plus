/*
	Deconstructors are a way to destroy objects created by a constructor within the C++
	program. They have the same name as the class but have ~ at the start. 
	It is good practice to use a ~ after the end of a constructor.

	Deconstructors take no arguments nor does it return any values. 
 */

#include <iostream> 
using namespace std;

class cube
{
	public:
		int x, y;
		cube(int a, int b){
			x = a;
			y = b;
		}

		//Destroys the constructor
		~cube(){

		}
};



int main()
{

}









