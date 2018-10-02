/*
	Inheritance is the technique of deriving a new class from an old one.
	The old one is referred to as the 'Base Class' and the new one is referred to
	as the 'derived class' or 'subclass'.

	Inheritance allows programmers to define a class in terms of another class, which
	makes creating and maintaining applications easier.

	In C++ there are five types of Inheritance:
	- Single Inheritance: When there is only one base class and one derived class
						  inheriting from the base class.

	- Multiple Inheritance: When a derived class inherits from more than one
							base class.

	- Hierarchical Inheritance: When multiple derived classes inherit from a single
								base class.

	- Multilevel Inheritance: When a derived class inherits from another derived
							  class which inherits from a base class.

	- Hybrid/Virtual Inheritance: When a derived class inherits from more than
								  one classes than all inherit from a single
								  base class.

*/

//The following is an example of 'multiple inheritance'

#include <iostream> 
using namespace std;

//We have a class called 'student' with three protected variables and two public functions
class student {
	protected:
		int roll, m1, m2;

	public:
		void get(){
			cout << "Enter the roll number: " << endl;
			cin >> roll;

			cout << "Enter the two highest marks: " << endl;
			cin >> m1 >> m2;
		}
};

//We have a second called called 'extracurriculam' than has one protected variable and
//a public method called getsm()
class extracurriculam {
	protected:
		int xm;

	public:
		void getsm()
		{
			cout << "\nEnter the mark for Extra Curriculam Activities: " << endl;
			cin >> xm;
		}
};

//This is a dervied class that inherits from student and extracurriculam.
//It also has its own variables and public method called display.
//An object of type output has access to the methods in the base classes.

class output : public student, public extracurriculam {
	int total, average;

public:
	void display()
	{
		total = (m1 + m2 + xm);
		average = total / 3;
		cout << "\n\n\tRoll No: " << roll << "\n\tTotal: " << total;
		cout << "\n\tAverage: " << average;
	}
};


int main(){
	output myObj;		//Object of derived class created
	myObj.get();		//base class method called
	myObj.getsm();		//base class method called
	myObj.display();	//derived class method called
}












