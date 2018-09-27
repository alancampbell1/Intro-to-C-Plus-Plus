/*

  Most programs take a piece of data as an input, process the data and generate an output.
  C++ supports a set of I/O functions and operations to do this.
  
  Features of I/O in C++:
  - C++ IO is type safe
  - C++ IO operations are based on streams of bytes and are device independent
  
  To peform IO, a C++ program must do the following:
  - Construct a stream object
  - Connect the stream object to an actual IO Device
  - Perform I/O operations on the stream via functions
  - Disconnect the stream to the actual IO Device, e.g. close the file
  - Free the stream object
 */


#include <iostream>

using namespace std;

int main(){
	int g;
	cin >> g;
	cout << "Output is " << g;
}