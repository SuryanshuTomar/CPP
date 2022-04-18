#include "iostream"

int addTwoNumbers(int firstNum, int secondNum){
   return firstNum + secondNum;
}

int main(){
   int firstNumber {12};
   int secondNumber {10};

   std::cout << "First Number : " << firstNumber << std::endl; 
   std::cout << "Second Number : " << secondNumber << std::endl;

   // int sum = firstNumber + secondNumber;
   int sum = addTwoNumbers(firstNumber, secondNumber);
   std::cout << "The sum is : " << sum << std::endl;
}