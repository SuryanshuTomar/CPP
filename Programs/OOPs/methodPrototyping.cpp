#include <iostream>
using namespace std;

class Employee {
private:
  int a, b, c;

public:
  int d, e;

  // Method Prototype in Class
  void setData(int x, int y, int z);
  void getData();
};

// Class Method Actual Definition
void Employee ::setData(int x, int y, int z) {
  a = x;
  b = y;
  c = z;
  d = 10;
  e = 100;
}

void Employee ::getData() {
  cout << "A : " << a << endl;
  cout << "B : " << b << endl;
  cout << "C : " << c << endl;
  cout << "D : " << d << endl;
  cout << "E : " << e << endl;
}

int main() {
  Employee emp1;
  emp1.setData(4, 5, 6);
  emp1.getData();

  return 0;
}