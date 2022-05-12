#include <iostream>
using namespace std;

void update(int **p){
   // Scenerio one (nothing will change in this one as we only changing the copy of the address of double pointer p)
   // p = p + 1;

   // Scenerio two (In this address of pi will change)
   // *p = *p + 1;

   // Scenerio three (This will permanently change the original value)
   **p = **p + 1;

}

int main(){
   int i = 5;
   int *pi= &i;

   // declaring double pointer
   int **dp = &pi;

   // Playing with double pointers
   // cout << "i : " << i << endl;
   // cout << "pi : " << pi << endl;
   // cout << "*pi : " << *pi << endl;
   // cout << "dp : " << dp << endl;
   // cout << "*dp : " << *dp << endl;
   // cout << "**dp : " << **dp << endl;


   // Pointers in Functions
   cout << "Before : " << i << endl;
   cout << "Before : " << pi << endl;
   cout << "Before : " << dp << endl;
   update(dp);
   cout << "After : " << i << endl;
   cout << "After : " << pi << endl;
   cout << "After : " << dp << endl;
   
   return 0;
}