/*
  Manipulators are operators in C++ used for formatting output. The data is manipulated
  by the programmer's choice of display.
  
  endl Manipulator:
  endl is a line feed operator that acts as a stream manipulator whose purpose is to
  feed the whole line and then point cursor to the beginning of the next line.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float basic, ta, da, gs;

  basic = 10000;
  ta = 800;
  da = 500;
  gs = basic + ta + da;

  cout << setw(10) << "Basic" << setw(10) << basic << endl
  << setw(10) << "TA" << setw(10) << ta << endl;
}