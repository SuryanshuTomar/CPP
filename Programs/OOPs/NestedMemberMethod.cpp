#include <iostream>
#include <string>

using namespace std;

class Binary {
private:
  string str;
  bool check_binary(void);

public:
  void read(void);
  string ones_compliment(void);
  void display_binary(void);
};

void Binary ::read() {
  cout << "Enter a Binary Number : " << endl;
  cin >> str;
}

bool Binary ::check_binary() {
  for (int i = 0; i < str.size(); i++) {
    if (str.at(i) != '0' && str.at(i) != '1') {
      cout << "The Enter number is not Binary ❌" << endl;
      return false;
    }
  }
  cout << "The Enter number is in correct Binary Format ✔️" << endl;
  return true;
}

string Binary ::ones_compliment() {
  // This is Nesting Methods or Member Function -> Because we are calling other
  // class method in this class methods.
  if (!check_binary()) {
    // cout << "Invalid Number format and cannot be inverted!!" << endl;
    return "";
  }

  for (int i = 0; i < str.size(); i++) {
    if (str.at(i) == '0') {
      str.at(i) = '1';
    } else {
      str.at(i) = '0';
    }
  }
  cout << "Binary Number 1's Compliment: " << str << endl;
  return str;
}

void Binary ::display_binary() {
  cout << "Binary Number currently : " << str << endl;
}

int main() {
  Binary b1;
  b1.read();
  b1.ones_compliment();
  b1.display_binary();

  return 0;
}