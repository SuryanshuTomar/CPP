#include <iostream>
using namespace std;

// Constructors continued...
// - Inline constructors - constructors where we can initialize values within a
// single where the constructor is defined. To defined the inline constructor we
// have to use the keyword "inline" before the constructor name.
//   Syntax :
//     inline Constructor_Name(string n, int v): name(n), value(v) {};

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

  // Inline constructor -
  inline Customer(string name, int account_no, float balance)
      : name(name), account_no(account_no), balance(balance) {}

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

  Customer c2("Alex mercer", 9954, 10000000.0);
  c2.display();

  return 0;
}