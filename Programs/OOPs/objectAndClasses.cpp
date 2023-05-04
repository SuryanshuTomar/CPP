#include <iostream>

// import Class from another file
#include "Support.cpp"

using namespace std;

// ----------------------------------------------------------------------------------------
// Summary -
// 1.  OOPs(Object Oriented Programming) -> Classes and Objects
// 2. c++ -> It is initially called "C with Classes" by Bjarn Stroustroup
// 3. Classes in C++ are an extension of structures in c. Structures had
// limitations as it does not follow OOPs principles.
//       -> Data Abstraction and Encapsulation is not possible
//       -> Cannot Define Methods.
//       -> Cannot Inherit Properties form other structures
//       -> No Polymorphism and Dynamic Data Binding.
//       -> Access Specifiers are not present
// 4. Structures in C++ are already typedef'ed.
// 5. In C++, We also declare objects along with the class definition itelself.
// eg - class Employee {
//    // class definition
// } emp1, emp2, emp3;

// ----------------------------------------------------------------------------------------

// Class "Hero"
class Hero {
  // properties
  int health;
  char level;
};

// Empty Class
class Villian {
  // properties
};

int main() {
  // Creating Object "h1" of "Hero" class data type
  Hero h1;

  // Creating Object "v1" of empty "Villian" class data type
  Villian v1;

  // Creating Object "s1" of imported "Support" class data type
  Support s1;

  cout << "size : " << sizeof(h1) << endl;
  // returning 8 bytes because of properties size inside of h1 object which 4
  // bytes for health of int type and 4 bytes for level of char32 type.

  cout << "size : " << sizeof(v1) << endl;
  // In case of empty class, the size of object will be 1 byte in order to just
  // identify that the class object is instantiated.

  // Checking the size of the imported class Support
  cout << "size : " << sizeof(s1) << endl;

  return 0;
}