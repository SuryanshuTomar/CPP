#include <iostream>
using namespace std;

// Function overloading - Function overloading is a feature of object-oriented
// programming where two or more functions can have the same name but different
// parameters. When a function name is overloaded with different jobs it is
// called Function Overloading. In Function Overloading “Function” name should
// be the same and the arguments should be different. Function overloading can
// be considered as an example of a polymorphism feature in C++.

// If multiple functions having same name but parameters of the functions should
// be different is known as Function Overloading. If we have to perform only one
// operation and having same name of the functions increases the readability of
// the program. Suppose you have to perform addition of the given numbers but
// there can be any number of arguments, if you write the function such as
// a(int,int) for two parameters, and b(int,int,int) for three parameters then
// it may be difficult for you to understand the behavior of the function
// because its name differs.

// Function overloading allows you to define multiple functions with the same
// name but different parameters.

int sum(int a, int b);
float sum(float a, float b);
double sum(double a, double b);

int main() {
  cout << endl << "sum int = " << sum(4, 5);
  cout << endl << "sum float = " << sum(4.1f, 5.2f);
  cout << endl << "sum double = " << sum(5.5, 6.5);

  return 0;
}

int sum(int a, int b) { return a + b; }

float sum(float a, float b) { return a + b; }

double sum(double a, double b) { return a + b; }