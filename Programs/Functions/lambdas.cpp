#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// C++ 11 introduced lambda expressions to allow inline functions which can be
// used for short snippets of code that are not going to be reused. Therefore,
// they do not require a name. They are mostly used in STL algorithms as
// callback functions.

// Syntax -
// [capture - clause](parameters) -> return -type {
//   definition
// }

// Return Type -
// Generally, the return-type in lambda expressions is evaluated by the compiler
// itself and we don’t need to specify it explicitly. However, in some complex
// cases e.g. conditional statements, the compiler can’t determine the return
// type and explicit specification is required.

// Lambdas in details -
// https://www.geeksforgeeks.org/lambda-expression-in-c/
// https://www.youtube.com/watch?v=MH8mLFqj-n8&list=PL43pGnjiVwgRggnsJcz1cK0j7b2-kLML_&index=8

// void doubleValue (int a) {
//   cout << a * 2 << ", ";
// }

// Capture Clause
// A lambda expression can have more power than an ordinary function by having
// access to variables from the enclosing scope. We can capture external
// variables from the enclosing scope in three ways using capture clause:

// [&]: capture all external variables by reference.
// [=]: capture all external variables by value.
// [a, &b]: capture ‘a’ by value and ‘b’ by reference.
// A lambda with an empty capture clause [] can only access variables which are
// local to it.

int main() {
  vector<int> v{2, 3, 7, 14, 23};
  int d = 2;

  // Doubling each element of vector using normal function -
  // for_each(v.begin(), v.end(), doubleValue);

  // Doubling each element of vector using lambdas  -
  for_each(v.begin(), v.end(), [d](int a) { cout << a << (a % d == 0 ? " is even" : " is odd") << endl; });

  return 0;
}