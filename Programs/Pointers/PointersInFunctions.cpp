#include <iostream>
using namespace std;

void print(int *p){
   cout << "Pointer in Function : " << *p << endl;
   cout << "Address of Pointer in Function : " << p << endl;
   cout << "Value change at the pointer location : " << ++(*p) << endl;
}

void print2(int &v){
   cout << "Value of var now " << ++v << endl;
}

void fun(int arr[], int size){
   cout << "Size of arr : " << sizeof(arr) << endl; // o/p - 8
}

void sum(int arr[], int size){
   int sum = 0;
   for(int i = 0; i < size; i++){
      sum += arr[i];
   }
   cout << "Sum is : " << sum << endl;
}

int main(){
   int var {5};
   int *p = &var;

   cout << "Address of var : " << &var << endl;
   // In this, we are passing a pointer which hold the address of var and passing it to the print function. So now if we do any change in this variable value in the function the changes will be reflected in the var also as now the function will not create a copy of the variable var but references to the same value in the memory.
   print(p);
   cout << "Current var value : " << var << endl;

   // Another Better way to create reference of the primitive types-
   print2(var);
   cout << "Current var value : " << var << endl;

   int arr[5] = {1, 2, 3, 4, 5};
   cout << "Size of arr : " << sizeof(arr) << endl; // o/p - 20
   fun(arr, 10);
   sum(arr + 2, 3); // Sending array from index 2

   return 0;
}