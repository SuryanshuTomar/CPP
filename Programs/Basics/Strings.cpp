#include <iostream>
#include <string>

using namespace std;

int main() {
  //   Method 1 of creating a string
  const char *str1 = "Alex";
  cout << str1 << endl;

  //   Method 2 of creating a string
  char str2[10] = "Alex \0 90"; 
  // Here, \0 signifies null and it requires two extra spaces in this char array. If we don't put it then it might print extra garbage value untill it encounters any null value. 
  cout << str2 << endl;

  //   Method 3 of creating a string
  string str3 = "This is a string";

  // Find any substring in a string
  string str4 = "This is a string";
  bool contains =
      str4.find("o") != string::npos; // -> std::string::npos signifies -1 value
  cout << contains << endl;
}
