/*
 * In C++, the one dimensional array of characters are called Strings which is
 * terminated by a null character \0
 * 
 */


#include <iostream> 
using namespace std;

int main()
{
	//Through an Array of Characters - Blank elements
	char greeting[6];

	//6 elements means 5 characters can fit in. Remember don't forget '\0'
	char newGreeting[6] = "Cloud";

	//To print all elements side by side
	//cout << newGreeting << endl;


	char word1[5] = "Good";
	char word2[4] = "Bye";

	/*
     * C++ supports a wide range of functions that manipulate null-terminated strings.
     * Including:
     * strcpy(str1, str2) - Copies string str2 into string str1
     * strcat(str1, str2) - Concates string str2 onto end of string str1
     * strlen(str1) - returns length of string str1
     * strchr(str, ch) - returns a pointer to the 1st occurrence of character ch in str
     * strstr(str1, str2) - returns a pointer to the 1st occurrence of string str2 in str1
	 */
	string finalWord = strcat(word1, word2);
	cout << finalWord << endl;


	/*
     * The above examples are known as C Strings. These are fine but can lead to
     * inefficient operations by Programmers.
     * ANSI standard has introduced a new class called 'string' which is an improvement
     * on the C Strings. Firstly, they are treated like an object and any another in-built
     * data-type. 
     * The string is treated as another container class for C++ and has an immense 
     * number of constructors, functions and operators.
	 */

	//Unlike Java, string is a lowercase keyword
	string x = "Hello";


	/*
	 * The following is a list of some of the functions supported by the string class:
	 * append() - appends a part of a string to another string 
	 * assign() - assigns a partial string
	 * end() - returns a reference to the end of a string
	 * length() - gives the size of a string or a number of elements of a string

	   Full List on: https://www.w3schools.in/cplusplus-tutorial/manipulating-strings/
	 */

	string someString = x.append(" World");
	cout << someString << endl;

	/*
	 * Operators used for String Objects:
	 * 
	 * = : assignment
	 * + : concatenate
	 * == : equality
	 * != : inequality
	 * < : less than
	 * <= : less than or equal
	 * > : greater than
	 * >= : greater than or equal
	 * [] : subscription
	 * << : Output
	 * >> : Input
	 */
}













