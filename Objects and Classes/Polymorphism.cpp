/*
	Polymorphism is a key concept of Object-Oriented Programming (OOP). It is the
	ability of an object to take on many forms.

	The most common use of polymorphism in OOP occurs when a parent class reference
	is used to refer to a child class object.

	Any object that passes an IS-A test is considered to be polymorphic. 

	An example of this is having a class called 'Animal' and a subclass called 'Dog' that
	inherits the 'Animal' class. The Dog IS-A Animal. If we have a subclass of 'Dog' called
	'Poodle' that inherits from 'Dog' then Poodle IS-A Dog and Poodle IS-A Animal.

	In C++, there are two main types of Polymorphism: Static Polymorphism and Dynamic
	Polymorphism.

	Static Polymorphism: refers to the Function Overloading and Operator Overloading 
	actions as outlined in earlier examples.

	Dynamic Polymorphism: refers to an entity changing its form depending on
	circumstances at runtime. In C++, this is achieved using a Virtual Function.

	A virtual function is a member function of a base class which can be redefined
	in derived/subclasses classes. You declare a virtual function using the keyword
	'virtual'. 

*/

#include <iostream> 
using namespace std;

//This is our base class
class Game
{
	int g;
	public:
		Game()
		{
			g = 1;
		}
		//We have a virtual method called show(). This can change in derived classes
		virtual void show()
		{
			cout << g;
		}
};

//This is our derived class that inherits from Game
class Anim: public Game
{
	int k;
public:
	Anim()
	{
		k = 2;
	}
	//This show method overrides the virtual show method to print the contents of k.
	 void show()
	{
		cout << k;
	}
};

int main()
{
	Game *g;
	Anim a;
	g = &a;
	g -> show();

	return 0;
}

























