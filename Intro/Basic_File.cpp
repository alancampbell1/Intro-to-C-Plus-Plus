/* 
* File: Basic_File.cpp
* Author: Alan
*/ 


/*
 * The '#include <iostream>' is a preprocessor directive. It tells the preprocessor to 
 * include the contents of the iostream header file in the program before compilation.
 * This file is vital for input/output streams
 */

#include <iostream> 

int main()												//This is the main function with a return value
{
 std::cout<<"This is my first C++ Program.";
 std::cout<<std::endl<<"and its very easy to learn";
}


/*
 * Explaining std::cout<<"This is my first C++ Program.";
   
   This is a C++ Statement and must terminate with a ;
   The text itself in the " " is referred to as a String.
   std:: is put before count when we want to use '#include <iostream>'.
   It specifies that we are using a name 'cout' which belongs to the namespace 'std'.
   The << Operator is an insertion stream operator. It sends the contents of the variable
   on its right to the object on its left.

   Notice how you can return an int value but no value has been returned. This is ok
   in C++.
 *
 */