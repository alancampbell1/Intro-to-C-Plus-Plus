/*
	A virtual function is a special form of member function that is declared within a
	base class and redefined by a derived class.

	The keyword 'virtual' is used to make a function virtual.

	This is part of the wider idea of Polymorphism.
*/

#include <iostream>
using namespace std;

class b
{
	public:
		virtual void show()
		{
			cout << "\n Show Base Class...";
		}

		void display()
		{
			cout << "\n Displaying Base Class...";
		}
};

class d: public b
{
	public:
		void display()
		{
			cout << "\n Displaying derived class...";
		}

		void show()
		{
			cout << "\n Showing derived class...";
		}
};

int main()
{
	b B;									//object of type b created
	b *ptr;									//pointer of type b created
	cout << "\n\t P points to base:\n";
	ptr=&B;									//pointer points to address of B
	ptr->display();							//pointer calls the display() of B - base
	ptr->show();							//pointer calls the show() of B - base

	cout<< "\n\n\t P points to drive:\n";
	d D;									//object of type d created
	ptr=&D;									//pointer of type b now points to d
	ptr->display();							//d's display() is called - base
	ptr->show();							//d's show() is called - derived (due to virtual)
}




