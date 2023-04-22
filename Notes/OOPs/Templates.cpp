#include <iostream>
using namespace std;

// Template are kind of similar to Generics in Java and TS.
template <typename T>
// this template will only work on the below block of code.
void print(T value) {
  cout << value << endl;
}

int main() {

  print(5);
  print(3.4f);
  print("Alex");
  print(true);

  return 0;
}