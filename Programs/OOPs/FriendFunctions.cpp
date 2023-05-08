#include <iostream>
using namespace std;

// FriendsFunctions -> These are functions(not class methods) that are allowed
// to access the private members of the class to which this function is friends
// with. We can declare a function friend by mentioned that in the class, that a
// particular function is a friend.
// Syntax : friend { Class_Name } { Function_Name }

/*
Properties of friend function -
1. It is not in the scope of class. (It will not become the part of the class).
2. Since it is not in the scope of the class , it cannot be called from the
object of that class.
3. So, it can only be invoked directly without the object of the class, like a
normal function.
4. These functions usually have class objects as parameteres, for which the
functions is declared a friend.
5. Can be declared inside public or private access specifier.
6. It cannot directly access the class members and can only access these class
members using their object passed as parameters only.
*/

// class
class Complex {
  // private members
  int a, b;

public:
  // class methods declaration/method prototype
  void setNumber(int n1, int n2);
  void getNumber();

  // friend function declaration
  friend Complex sumComplex(Complex o1, Complex o2);
};

// class methods definitions
void Complex ::setNumber(int n1, int n2) {
  a = n1;
  b = n2;
}
void Complex ::getNumber() {
  cout << "Complex Number entered is : " << a << " + " << b << "i" << endl;
}

// friend function definition -
Complex sumComplex(Complex o1, Complex o2) {
  Complex o3;
  o3.setNumber(o1.a + o2.a, o1.b + o2.b);

  return o3;
}

int main() {
  Complex c1, c2, sum;

  c1.setNumber(1, 2);
  c1.getNumber();
  c2.setNumber(3, 4);
  c2.getNumber();

  sum = sumComplex(c1, c2);
  sum.getNumber();

  return 0;
}