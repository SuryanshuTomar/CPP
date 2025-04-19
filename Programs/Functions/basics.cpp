#include <iostream>
using namespace std;

// Function are resusable piece of code that contains a common logic which can
// used multiple times in our codebase so that we dont have to write same piece
// of code again and again when we need the same logic.

// syntax :
// [return_datatype] [function_name] ([argument_type1] [argument1], ...,
// [argument_typeN] [argumentN]) {
// ...write function logic here...
// return [returning_data];
// }

// eg:
// void helloWorld(string name, int age) {
// cout << "My name is " << name << " and I am " << age << " years old!";
// }

// Note:
// 1. All the function we define should be declared above the main() function.
// 2. If we want to write the function body below the main function then, we
// still need to declare the function signature first before the main body.

int sum(int a, int b) {
  int result = a + b;
  return result;
}

void introduceMe(string name);

int main() {
  int result = sum(4, 5);
  cout << "The sum is : " << result << endl;

  introduceMe("DeathSlayer");
  return 0;
}

void introduceMe(string name) {
  cout << "Hello!, my name is " << name << "! " << endl;
}