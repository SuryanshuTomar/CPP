#include <iostream>
using namespace std;

// Static vs Memory Allocation of Objects
// 1. Static memory is Stack and Dynamic Memory is Heap
// 2. Stack memory is very limited while that is not the case with the heap
// memory.
// 3. We can allocate stack memory(Static) to a variable by directly declaring a
// variable.
// 4. We can allocate heap memory(Dynamic) to a variable by using the new
// keyword along with calling the constructor of that particular data type.
// 5. Static memory is allocated at the compile time while the Dynamic memory is
// allocated at the runtime.

// More on -
// https://unstop.com/blog/difference-between-static-and-dynamic-memory-allocation

class Student {
public:
  string name;
  int age;
  int roll_number;
  string grade;
};

int main() {
  // Static Object creation and memory allocation
  Student s1;
  s1.name = "Death Slayer";
  s1.age = 1000;
  s1.grade = "100th", s1.roll_number = 666;

  // Dynamic Object creation and memory allocation.
  // 1.Without calling the default constructor
  Student *s2 = new Student;

  // 2. With calling the default constructor
  Student *s3 = new Student();

  // Calling the object properties/methods for the dynamic memory allocated
  // object.
  // 1. Using the Dereference operator.
  (*s2).name = "Black Bear";
  (*s2).age = 12;
  (*s2).roll_number = 1;
  (*s2).grade = "5th";

  // 2. Using the Arrow operator.
  s2->name = "Alex Mercer";
  s2->age = 25;
  s2->roll_number = 2;
  s2->grade = "B.tech";

  // Print the details -
  cout << endl;
  cout << "Name s1 : " << s1.name << endl;
  cout << "Age s1 : " << s1.age << endl;
  cout << "Roll Number s1 : " << s1.roll_number << endl;
  cout << "Grade s1 : " << s1.grade << endl;
  
  cout << endl;
  cout << "Name s2 : " << (*s2).name << endl;
  cout << "Age s2 : " << (*s2).age << endl;
  cout << "Roll Number s2 : " << (*s2).roll_number << endl;
  cout << "Grade s2 : " << (*s2).grade << endl;
  
  cout << endl;
  cout << "Name s3 : " << s3->name << endl;
  cout << "Age s3 : " << s3->age << endl;
  cout << "Roll Number s3 : " << s3->roll_number << endl;
  cout << "Grade s3 : " << s3->grade << endl;

  return 0;
}