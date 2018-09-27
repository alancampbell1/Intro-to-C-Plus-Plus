/*
This file is for demonstration purposes in storage_classes.cpp

*/

#include <iostream>
using namespace std;

extern int count;

void write_extern(void){
	cout << "This is a separate piece of text from second_file.cpp" << endl;

}