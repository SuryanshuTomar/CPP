#include <iostream>
using namespace std;

// Constructors continued...
// - Copy Constructor - A copy constructor is a type of constructor that
// initializes an object using another object of the same class. In simple
// terms, a constructor which creates an object by initializing it with an
// object of the same class, which has been created previously is known as a
// copy constructor.

// The process of initializing members of an object through a copy constructor
// is known as "Copy Initialization". It is also called "Member-Wise
// Initialization" because the copy constructor initializes one object with the
// existing object, both belonging to the same class on a member-by-member copy
// basis.

// Syntax - Syntax of Copy Constructor in C++
// Copy constructor takes a reference to an object of the same class as an
// argument:

// Types of copy constructor -
// 1. Default Copy Constructor - An implicitly defined copy constructor will
// copy the bases and members of an object in the same order that a constructor
// would initialize the bases and members of the object. When a copy constructor
// is not defined, the C++ compiler automatically supplies with its
// self-generated constructor that copies the values of the object to the new
// object.

// 2. User Defined Copy Constructor - In case of a user-defined copy
// constructor, the values of the parameterised object of a class are copied to
// the member variables of the newly created class object. The initialization or
// copying of the values to the member variables is done as per the definition
// of the copy constructor.

class Student {
  int roll_no;
  string name;
  double fees;

public:
  Student(string name, int roll_no, double fees) {
    this->name = name;
    this->roll_no = roll_no;
    this->fees = fees;
  }

  // User Defined Copy Constructor
  Student(Student &student) {
    roll_no = student.roll_no;
    name = student.name;
    fees = student.fees;
    cout << "User Defined Copy Constructor called!" << endl;
  }

  void displayInfo() {
    cout << endl;
    cout << "Student Info : " << endl;
    cout << "Name : " << name << endl;
    cout << "Roll_no : " << roll_no << endl;
    cout << "Fees : " << fees << endl;
  }
};

class Customer {

public:
  string name;
  int account_no;
  float balance;
  Customer(string name, int account_no, float balance) {
    this->name = name;
    this->account_no = account_no;
    this->balance = balance;
  }

  void displayInfo() {
    cout << endl;
    cout << "Name : " << name << endl;
    cout << "Account_no : " << account_no << endl;
    cout << "Balance : " << balance << endl;
  }
};

int main() {
  Customer c1("Alex Mercer", 9999, 15000000000);

  // Calling the System defined copy constructor
  Customer c2(c1);
  c2.displayInfo();

  // Calling the User defined copy constructor
  Student s1("Death Slayer", 101, 12000);
  Student s2(s1);
  s2.displayInfo();

  return 0;
}