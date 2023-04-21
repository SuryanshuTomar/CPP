#include <iostream>
using namespace std;

int main(){

   // Declaring a const variable in Stack Memory
   const int MAX_AGE = 90;

   // Declaring a const variable in Heap Memory
   // Method 1- 
   // const int* a = new int; // This means we cannot change the value stored at pointer a
   // *a = 2; // value cannot be changed
   // a = (int*) &MAX_AGE; // But address can be changed

   // Method 2- 
   // int* const a = new int; // This means we cannot change the address of pointer a
   // *a = 2; // value can be change
   // a = (int*) &MAX_AGE; // But address cannot be changed

   // Method 3- 
   // const int* const a = new int; // This means we cannot change the address of pointer a and the value a itself
   // *a = 2; // value cannot be changed
   // a = (int*) &MAX_AGE; // Address also cannot be changed
   
   return 0;
}