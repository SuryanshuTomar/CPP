#include <iostream>
using namespace std;

class Employee {
private:
  int id;

  // static member variable
  static int empCount;

public:
  void setData() {
    cout << "Enter employee id : " << endl;
    cin >> id;
    empCount++;
  }

  void getData() { cout << "The id of the employee is : " << id << endl; }

  static void getEmployeeCount() {
    cout << "Total no. of Employee at present: " << empCount << endl;
  }
};

// -> Static/Class members variables in C++ cannot be defined inside the class
// but only declared. The static member variables must be defined outside of the
// class and declared inside of the class. Also, event if we dont set the
// initial value to the static member variable, then it will take the default
// value of that data type itself, Like 0 in case of int. int Employee
// ::empCount = 0;

// Static member variable definition for Employee class
int Employee ::empCount;

// -> Static member function can only access static member variables in class.
// -> Static members functions only in C++, can also accessed outside of the
// class using the Class name itself and we can access it with the help of Scope
// Resolution Operator(::) and not with the Dot Operator(.)

int main() {
  Employee e1, e2, e3;

  e1.setData();
  e1.getData();
  // Accessing Static Members outside of class
  Employee ::getEmployeeCount();

  e2.setData();
  e2.getData();
  // Accessing Static Members outside of class
  Employee ::getEmployeeCount();

  e3.setData();
  e3.getData();
  // Accessing Static Members outside of class
  Employee ::getEmployeeCount();

  return 0;
}