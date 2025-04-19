#include <iostream>
#include <string>

using namespace std;

// Access Modifiers
// Access Modifiers are a way which defines and allows a class which data should
// be allowed to access where. There are three types of access modifiers in C++;
// 1. Private - This is the default access modifier used in the class if don't
// mention any access modifier inside a class. This private access modifier
// doesn't allow the properties and method defined in its scope to be used
// outside of the class.
// 2. Protected - This access modifier allows the properties and method defined
// in its scope to be accessed within its own class or by its child class.
// 3. Public - This access modifier allows the properties and mehthods defined
// in its scopes to be accessed anywhere.

class Person {
private:
  string panNo;
  int adharCard;

public:
  string name;
  int age;
  string gender;

protected:
  string bankName;
  int bankAccount;
};

int main() {
  Person s1;
  s1.name = "Alex mercer";
  s1.age = 26;
  s1.gender = "Male";

  // Rest of the properties that are mentioned inside the private and protected
  // scope cannot be access here. i.e. - outside the class.

  cout << "Name : " << s1.name << endl;
  cout << "Age : " << s1.age << endl;
  cout << "Gender : " << s1.gender << endl;

  return 0;
}