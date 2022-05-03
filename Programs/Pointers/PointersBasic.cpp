#include <iostream>

int main(){
   int n = 5;

   // Using addressOf-operator(&) to print the memory address where the value of n is stored
   std::cout << &n << std::endl;

   // Store the memory address in a pointer
   int* ptr = &n;
   std::cout << ptr << std::endl;

   // Checking the size of a pointer using the sizeof() function
   std::cout << "Size of ptr : " << sizeof(ptr) << std::endl;

   // Dereferencing the pointer using Dereference Operator(*)
   std::cout << *ptr << std::endl; 

   // Accessing the memory address location using the pointer and changing its value 
   *ptr = 10;
   std::cout << "*ptr = " << *ptr << ", " << "n = " << n << std::endl;

   // Cannot be Dereference a pointer unless assingned a memory address of a variable
   int v;
   int* ptr2 = &v;
   *ptr2 = 12;
   std::cout << "v = " << v << std::endl;

   // It is Bad practice to initialize a pointer without initializing. Sometimes the compiler can also throw Segmentation Error.
   // int *ptr3;
   int *ptr3 = 0; // Correct
   int *ptr4 = &n; // Correct

   // If we perform any arithmetic ooperation on pointers then then those arithmetic operation will be performed in the multiple of the size of the data type of the pointer.
   std::cout << "ptr4 : " << ptr4 << std::endl;
   std::cout << "ptr4 + 1 : " << ptr4 + 1 << std::endl;
   std::cout << "*(ptr4 + 1) : " << *(ptr4 + 1) << std::endl;
   
   return 0;
}
