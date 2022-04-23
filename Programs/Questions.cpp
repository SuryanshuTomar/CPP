
#include <iostream>
using namespace std;

int notes(){
      int amount = 1595;
 
      cout << "100 Notes : " << amount / 100;
      amount = amount - (amount / 100) * 100;  
      cout << endl;
      
      cout << "50 Notes : " << amount / 50;
      amount = amount - (amount / 50) * 50;  
      cout << endl;

      cout << "20 Notes : " << amount / 20;
      amount = amount - (amount / 20) * 20;  
      cout << endl;

      cout << "1 Notes : " << amount / 1;
      cout << endl;
}

int main(){

      //Q1 - Finding Number of Notes required of the amount -
      notes();

   return 0;
}