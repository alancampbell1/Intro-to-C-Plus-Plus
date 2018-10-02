/*
	In this example, the class student has a series of variables that are originally
	empty.
	However, when the class is instantiated and the enter() function is called the user
	can enter details relating to the student.
	There is also a display() method print the results instead of typing the information
	each time.
 */


#include <iostream> 
using namespace std;

class student
{
	public:
		char name[30];
		char clas[10];
		int age;
		int studentNum;

		void enter()
		{
			cout << "Please enter your name"; cout << endl; cin >> name;
			cout << "Please enter your classname"; cout << endl; cin >> clas;
			cout << "Please enter your age"; cout << endl; cin >> age;
			cout << "Please enter your student number"; cout << endl; cin >> studentNum;
		}

		void display()
		{
			cout << "\n Name\tClass\tAge\tStudentNum";
			cout << "\n" << name << "\t" << clas << "\t" << age << "\t" << studentNum;
			cout << endl;
		}
};


int main()
{
	student studentA;
	studentA.enter();
	studentA.display();
}









