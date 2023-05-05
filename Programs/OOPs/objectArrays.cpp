#include <array>
#include <iostream>

using namespace std;

class Employee {
private:
  int id;
  int salary;

public:
  void setId(void) {
    salary = 1100;
    cout << "\nEnter employee id : ";
    cin >> id;
  }

  void getId(void) { cout << "\nThe id of employee is : " << id << endl; }
};

int main() {
  // -> Method - 1
  // - Creating Object Array for Employee class.
//   Employee fb[5];

  // - Setting the id for all the employees and getting all ids
//   for (int i = 0; i < sizeof(fb) / sizeof(Employee); i++) {
//     fb[i].setId();
//     fb[i].getId();
//   }

  // -> Method - 2
  // - Creating Object Array for Employee class.
    array<Employee, 5> fb;

  // - Setting the id for all the employees and getting all ids
    for (Employee i : fb) {
      i.setId();
      i.getId();
    }

  return 0;
}