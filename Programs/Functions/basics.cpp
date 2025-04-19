#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }

int main() {
  int result = sum(4, 5);
  cout << "The sum is : " << result << endl;
  return 0;
}