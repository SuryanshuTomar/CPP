// Anything that starts with a "#" is a part of the preprocessor.

// => Command to check the preprocessor code along with our main code.
// 1. g++ -E macros.cpp => this command will not compile the code but instead it
// will place the precessor code into the file.
// 2. g++ -E macros.cpp | nl  => nl will show the file with the no. of lines.

#include <iostream>
using namespace std;

// This is how const is defined in legacy c++
#define PI 3.1415926
// this define will place the values directly with its values before the code
// even compiles.

// constexpr float PI = 3.1415926; // this will not do the textual replacement
// of the code before the compilation of the code. This is preferred way of
// defining const in modern c++

#define SHOW 1
// we can also define the const when at the time of preprocessing this file by defining this argument in the command itself like -
// g++ -E -DSHOW=1 macros.cpp | nl
// here, -D means define the variable.

int main() {
#if SHOW
  cout << PI << endl;
#else
  cout << "No show" << endl;
#endif

  return 0;
}