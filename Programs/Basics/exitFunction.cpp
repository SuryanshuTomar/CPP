#include <iostream>
using namespace std;

int main(){

   char input;
   cout << "Do you want to quit : y/n - ";
   cin >> input;

   if(input == 'y'){
      cout << "Exiting...";
      exit(0);
   }else{
      cout << "Continuing...";
   }

   return 0;
}