// => References -

// - A reference variable is an alias, that is, another name for an already
// existing variable. Once a reference is initialized with a variable, either
// the variable name or the reference name may be used to refer to the variable.
// - When a variable is declared as a reference, it becomes an alternative name
// for an existing variable. A variable can be declared as a reference by
// putting ‘&’ in the declaration.
// - Also, we can define a reference variable as a type of variable that can act
// as a reference to another variable. ‘&’ is used for signifying the address of
// a variable or any memory. Variables associated with reference variables can
// be accessed either by its name or by the reference variable associated with
// it.

// -> Syntax :
// data_type &ref = variable;

// -> C++ Program to demonstrate the use of references
// #include <iostream>
// using namespace std;
// 
// int main() {
//   int x = 10;
// 
//   // ref is a reference to x.
//   int &ref = x;
// 
//   // Value of x is now changed to 20
//   ref = 20;
//   cout << "x = " << x << '\n';
// 
//   // Value of x is now changed to 30
//   x = 30;
//   cout << "ref = " << ref << '\n';
// 
//   return 0;
// }

// -> References vs Pointers -
// - References are often confused with pointers but three major differences between references and pointers are −
// 1. You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
// 2. Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
// 3. A reference must be initialized when it is created. Pointers can be initialized at any time.

// -> Applications of Reference in C++ -
// - There are multiple applications for references in C++, a few of them are mentioned below:
// 1. Modify the passed parameters in a function
// 2. Avoiding a copy of large structures
// 3. In For Each Loop to modify all objects
// 4. For Each Loop to avoid the copy of objects