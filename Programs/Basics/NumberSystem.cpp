#include "iostream"

int main(){
   int number1 = 15;
   int number2 = 017;
   int number3 = 0xf;
   int number4 = 0b1111;

   std::cout << "Number 1 : " << number1 << std::endl;
   std::cout << "Number 2 : " << number2 << std::endl;
   std::cout << "Number 3 : " << number3 << std::endl;
   std::cout << "Number 4 : " << number4 << std::endl;

   return 0;
}