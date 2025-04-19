#include <iostream>
using namespace std;

// Constructors
// 1. It is a special method that is invoked automatically at the time of the
// object creation.
// 2. Name of the constructor should the same as the class name.
// 3. It does not have any return type.
// 4. It is used to initialize the instance/object with default values for
// particular class.
// 5. A class can have multiple constructors but their signature should be
// different meaning no two constructors should have same type/number of
// parameters.
// 6. When a class has more than one Constructors defined for it, then it is
// called Constructor Overloading.

// Constructors are classified as follows:
// - Parameterized Constructor
// - Constructor overloading
// - Copy Constructors
// - Default Constructor
// - Constructor with default arguments.

class Customer {
  string name;
  int account_no;
  float balance;

public:
  // Default constructor - This will be called when there are no parameteres
  // passed at the time of the object creation.
  Customer() {
    cout << endl;
    cout << "default constructor is called !" << endl;
  }

  // Parameterized constructor - This will be called when the no. of parameters
  // and their type should be same as the arguments passed to the constructor at
  // the time of the object creation.
  Customer(string n, int a) {
    name = n;
    account_no = a;
    balance = 0.0f;
  }

  // Parameterized constructor with assigning value using "this" keyword. "this"
  // keyword is used to refer to the current object/instance of a class and
  // using "this" keyword will be allow us to refer to the class parameters and
  // method inside the class itself. "this" stores the address of the object
  // itself.
  Customer(string name, int account_no, float balance) {
    this->name = name;
    this->account_no = account_no;
    this->balance = balance;

    // another way to initialize this is using the dereference opeartor instead
    // of the arrow operator.
    // (*this).name = name;
    // (*this).account_no = account_no;
    // (*this).balance = balance;
  }

  // Display information of the customer
  void display() {
    cout << endl;
    cout << "Customer Info : " << endl;
    cout << "Name : " << this->name << endl;
    cout << "Account no. : " << this->account_no << endl;
    cout << "Balance : " << this->balance << endl;
  }
};

int main() {
  Customer c1;
  c1.display();

  Customer c2("Death Slayer", 8520);
  c2.display();

  Customer c3("Alex mercer", 9954, 10000000.0);
  c3.display();

  return 0;
}