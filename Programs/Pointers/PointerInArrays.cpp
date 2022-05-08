#include <iostream>
using namespace std;

int main(){
   int arr[10] = {120, 230, 340, 450};
   int *ptr = &arr[0];

   cout << "Address of first memory block in arr is  : " << arr << endl;
   cout << "Address of first memory block in arr is  : " << &arr[0] << endl;
   cout << "Address of first memory block in arr is  : " << &arr << endl;
   cout << "Address pointer ptr : " << &ptr << endl;

   cout << "Value at the 0th index / memory block of arr : " << arr[0] << endl;
   cout << "Value at the 0th index / memory block of arr : " << *arr << endl;

   cout << "Value at the 1st index / memory block of arr : " << arr[1] << endl;
   cout << "Value at the 1st index / memory block of arr : " << *(arr + 1) << endl;


   // Internally  arr[i] is evaluated as -> *(arr + i), 
   // so if we write our arr like i[arr] then it will also be valid as it will be evaluated 
   // as *(i + arr)
   int i = 3;
   cout << "Array access like this is also valid : " << i[arr] << endl;

   // Size in Pointers and Array
   int temp[10];
   cout << "Size of temp : " << sizeof(temp) << endl;
   int *p = &temp[0];
   cout << "Size of pointer : " << sizeof(p) << endl;
   cout << "Size of pointer : " << sizeof(&p) << endl;

   // Difference between Char Arrays and other primitive Arrays
   char ch = 'k';
   char *chPtr = &ch;
   cout << "chPtr will print the value starting at ch until null character : " << chPtr << endl;
   cout << "*chPtr will print the value of ch : " << *chPtr << endl;

   return 0;
}