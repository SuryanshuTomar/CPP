#include <iostream>
using namespace std;

// Pass by value of n(not the original value of n but the copy of n, So any change we do on this copy of n will not be reflected to the original value of n)
void dummy(int n) {
   n++;
   cout << "n is " << n << endl;
}

int main(){ 
   int n;
   cout << "Enter the value of n: ";
   cin >> n;

   dummy(n);
   cout << "Number is : " << n << endl;
   return 0;
}