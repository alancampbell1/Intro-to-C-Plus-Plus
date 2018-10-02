/*
	Constructors are special member functions of a class and are used to initialise
	variables of a class.
	Each time an instance of a class is created the constructor method is called.
	They are treated as a special member function because they share the same name
	as the class itself.

	The name 'constructor' is because it constructs the value of data members of a 
	class. Initial values are passed as arguments to the constructor when an object is
	declared.
 */


#include <iostream> 
using namespace std;

/*
	Important characteristics of constructors:
	- They should be declared in public section
	- They do not have a return type, not even void
	- They automatically get invoked when an object is created
	- They can have default arguments
	- You cannot refer to their address
	- Constructors cannot be virtual
*/


/*
	The following is an example of a default constructor. There is no arguments
	taken in but the programmer can write some initialisation statements within it.
*/

class sampleClass
{
	int g, h;
	public:
		sampleClass(void){
			g = 1;
			h = 2;
		}
};


int main()
{

}









