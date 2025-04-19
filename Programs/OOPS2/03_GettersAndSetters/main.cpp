#include <iostream>
#include <string>

using namespace std;

// Setters and Getters ->
// setters and getters are basically class methods that helps us in abstraction
// of data of objects. Convention for writing the setters and getters are - For
// setters, the name of the method should start with "set" keyword and for
// getters, the name of the method should start with "get" keyword
class Student {
private:
  string name;
  int age, roll_number;
  string grade;

public:
  // setters
  void setName(string name) { (*this).name = name; }

  void setAge(int age) { (*this).age = age; }

  void setRollNumber(int roll_number) { (*this).roll_number = roll_number; }

  void setGrade(string grade) { (*this).grade = grade; }

  // getters
  string getName() { return (*this).name; }

  int getRollNumber() { return (*this).roll_number; }

  int getAge() { return (*this).age; }

  string getGrade() { return (*this).grade; }
};

int main() {
  Student s1;
  s1.setName("Alex mercer");
  s1.setAge(25);
  s1.setRollNumber(101);
  s1.setGrade("9.0");

  cout << "Name : " << s1.getName() << endl;
  cout << "Age : " << s1.getAge() << endl;
  cout << "Roll Number : " << s1.getRollNumber() << endl;
  cout << "Grade : " << s1.getGrade() << endl;

  return 0;
}