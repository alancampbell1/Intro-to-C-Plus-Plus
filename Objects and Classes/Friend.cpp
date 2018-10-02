/*
	In C++ a function or an entire class may be declared to be a 'friend' of another
	class. A friend function of a class has the capability to access private data
	members of a member function.

*/

#include <iostream>
using namespace std;

class Distance{
	private:
		int meter;

	public:
		Distance(): meter(0) {	}
		friend int func(Distance);	//friend function declared
};

int func(Distance d){				//friend function instantiated
	//function definition
	d.meter = 10;			//access private data from non-member function
	return d.meter;
}

int main(){
	Distance D;
	cout << "Distance: " << func(D);
}