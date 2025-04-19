#include <iostream>
using namespace std;

// In C++, a function can be specified as inline to reduce the function call
// overhead. The whole code of the inline function is inserted or substituted at
// the point of its call during the compilation instead of using normal function
// call mechanism.

// Syntax -
// We just need to add the “inline” keyword before the function prototype:
// inline return_type function_name(params)...

// Inlining is only a request to the compiler, not a command. The compiler may
// not perform inlining in such circumstances as -
// 1. If a function contains a loop.
// 2. If a function contains static variables.
// 3. If a function is recursive.
// 4. If a function return type is other than void, and the return statement
// doesn’t exist in a function body.
// 5. If a function contains a switch or goto statement.

// Need of Inline Functions -
// When a function is called, the CPU stores the return address, copies
// arguments to the stack, and transfers control to the function. After
// execution, the return value is stored, and control is returned to the caller.
// This overhead can be significant for small, frequently used functions, as
// their execution time is less than the time spent on the call and return
// process. This is where the inline functions shine. They remove this overhead
// by substituting the code of the function in place of function call.

// In Details - https://www.geeksforgeeks.org/inline-functions-cpp/

inline int getProduct(int a, int b);

int main() {
  int a, b;
  cout << "Enter the value of and b : ";
  cin >> a >> b;

  cout << "The product of a and b is : " << getProduct(a, b) << endl;

  return 0;
}

inline int getProduct(int a, int b) {
  int product = a * b;
  return product;
}