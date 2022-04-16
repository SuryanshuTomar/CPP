#include<iostream>

int main(){
   // Compile Time Error -
   // std::cout << "Hello World !" << std::endl
   // Solution -
   std::cout << "Hello World !" << std::endl;

   // Run Time Error - 
   // 7/0;
   // Solution - 
   int value = 7/0;
   return 0;
}