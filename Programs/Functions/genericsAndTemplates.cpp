#include <iostream>
using namespace std;

// Generics  - Generics is the idea to allow type (Integer, String, … etc and
// user-defined types) to be a parameter to methods, classes and interfaces. For
// example, classes like an array, map, etc, which can be used using generics
// very efficiently. We can use them for any type.

// The method of Generic Programming is implemented to increase the efficiency
// of the code. Generic Programming enables the programmer to write a general
// algorithm which will work with all data types. It eliminates the need to
// create different algorithms if the data type is an integer, string or a
// character.

// The advantages of Generic Programming are -
// 1. Code Reusability
// 2. Avoid Function Overloading
// 3. Once written it can be used for multiple times and cases.

// Generics can be implemented in C++ using Templates. Template is a simple and
// yet very powerful tool in C++. The simple idea is to pass data type as a
// parameter so that we don’t need to write the same code for different data
// types. For example, a software company may need sort() for different data
// types. Rather than writing and maintaining the multiple codes, we can write
// one sort() and pass data type as a parameter.

// Syntax : 
// template <typename [type_name_var]> => generally type_name_var is used as "T"  
// or 
// template <typename T>
// or 
// template <class T>
// or 
// template <class Type>

// Generics in Class- https://www.geeksforgeeks.org/generics-in-c/

// One function works for all data types.
// This would work even for user defined types
// if operator '>' is overloaded
template <typename T> T myMax(T a, T b) { return (a > b) ? a : b; }

int main() {

  // Call myMax for int
  cout << myMax<int>(3, 7) << endl;

  // call myMax for double
  cout << myMax<double>(3.0, 7.0) << endl;

  // call myMax for char
  cout << myMax<char>('g', 'e') << endl;

  return 0;
}