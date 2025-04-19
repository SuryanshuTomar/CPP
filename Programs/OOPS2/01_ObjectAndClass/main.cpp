#include <iostream>
#include <string>

using namespace std;

// It is a user defined data type blueprint for creating objects.
// And an object is an instance of a class. Meaning, an object contains the
// actual data for the blueprint class that has a state and a behaviour.
// The class only tells us what the real world data would look like where object
// is that real world data created based on that class blueprint.

// Size of the Class - Since class is not a real world entity, it does not take
// any space.
// Size of the Object - Object is created at the run time and only
// then that object is allocated the value according to the its properties and
// methods.

// Memory Allocation -
// Note: If there is an empty class, then, still when the object for the class
// is created it allocated some memory and that is 1byte.
// C++ does not allocate memory to the data types inside the class normally.
// Instead, it uses a concept called "padding" for the memory allocation of the
// data types for class objects.

class Student {
public:
  string name;
  int rollNo;
  float gpa;
  string std;
};

class Check {
  string d;
  float c;
  int a; 
  char b;
};

int main() {
  Student s1; // Here, "s1" is an object whereas, "Student" here is a class.
  s1.name = "Alex Mercer";
  s1.rollNo = 101;
  s1.gpa = 8.8;
  s1.std = "10th";

  Student s2; // Here, "s2" is an object whereas, "Student" here is a class.
  s2.name = "Death Slayer";
  s2.rollNo = 102;
  s2.gpa = 9.0;
  s2.std = "11th";

  cout << s1.name << " " << s1.rollNo << " " << s1.gpa << s1.std << endl;
  cout << s2.name << " " << s2.rollNo << " " << s2.gpa << s2.std << endl;

  cout << "Size of s1 : " << sizeof(s1) << endl;
  cout << "Size of s2 : " << sizeof(s2) << endl;

  Check c1;
  cout << "Size of c1 : " << sizeof(c1) << endl;

  return 0;
}