#include <iostream>


int main(){
   int n = 5;

   // Print the memory address where the value of n is stored
   std::cout << &n << std::endl;

   // Store the memory address in a pointer
   int* ptr = &n;
   std::cout << ptr << std::endl;

   // Dereferencing the pointer
   std::cout << *ptr << std::endl; 

   // Accessing the memory address location using the pointer and changing its value 
   *ptr = 10;
   std::cout << "*ptr = " << *ptr << ", " << "n = " << n << std::endl;

   // Cannot be Derference a pointer unless assingned a memory address of a variable
   int v;
   int* ptr2 = &v;
   *ptr2 = 12;
   std::cout << "v = " << v << std::endl;


   return 0;
}
