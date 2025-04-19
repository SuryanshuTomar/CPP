#include <iostream>
using namespace std;

int product(int a, int b) {
  static int c = 0; // This executes only once, meaning this variable will be
                    // initialized only once no matter how many times we will
                    // call this function within our code. And the value for the
                    // static variable wil be maintained between function calls.

  c = c + 1;
  return (a * b) + c;
}

int main() {
  int a = 5, b = 10;

  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  cout << "The product of a and b is : " << product(a, b) << endl;
  return 0;
}