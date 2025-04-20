#include <iostream>
#include <source_location>

using namespace std;

#define LOG(param)                                                             \
  cout << "Log : " << #param << endl;                                          \
  param;                                                                       \
  cout << endl;

inline void add(int a, int b) {
  source_location location = source_location::current();
  cout << "Source Location ->  " << location.line() << " : "
       << location.function_name() << endl;

  cout << "Details : " << __LINE__ << " : " << __FILE__ << endl;
  cout << (a + b) << endl;
}

int main() {
#ifdef DEBUG
  LOG(add(4, 5));
#else
  add(4, 5);
#endif
  return 0;
}