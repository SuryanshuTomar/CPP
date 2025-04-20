#include <iostream>
using namespace std;

// #ifndef PI
//   #define PI 3.1415926
// #endif

int main(){
  
  #ifdef PI
    cout << PI << endl;
  #else
    cout << 22.0f/7.0f << endl;
  #endif
  
   return 0;
}