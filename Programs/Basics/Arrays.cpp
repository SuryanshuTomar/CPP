#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
  // ----------------------------------------------------------------------------------------
  // Note:
  // - The variable of the array stores the location of first index value of the
  // array in the memory.
  // - The array values are stored in contiguous memory locations
  // - If we initializer an array without any default value then the array
  // indices values will contain garbage values

  // -> Classical Arrays -
  // - Array Initialization -
  int arr[3];

  // - Array Initialization
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;

  // - Declaring and Initializing array in One Line -
  int arr1[3] = {1, 2, 3};

  // Initializing an array with a default value -
  int arr2[100] = {0};
  // Note: This default value initialization will not work with values other
  // than 0;

  // if we want to fill an array with a value other than default value then we
  // can do it like this -
  char arr3[5];
  fill_n(arr3, 5, 'a');

  // Accessing an array index value -
  cout << arr3[3] << endl;

  // - Printing the whole array -
  int Grades[] = {3, 2, 5, 2};
  cout << "Grades: [";
  for (auto g : Grades) {
    cout << g << " ,";
    // minus the commas, remove (<< ", ") or to space out the grades, just
    // remove the comma
  }
  cout << "]" << endl;

  // - Checking the size of an array -
  int arrLength = sizeof(Grades) / sizeof(int);
  cout << "The size of the array is : " << arrLength << endl;

  // ----------------------------------------------------------------------------------------
  // - Creating an array in Stack Memory and Heap Memory -
  // 1. Array in Stack Memory -
  int arrStack[10];
  // This array will be destroyed when the compiler finished executing the
  // program.

  // 2. Array in Heap Memory -
  int *arrHeap = new int[10];
  // This array will be not destroyed when the compiler finished executing the
  // program. We have manually delete this array.

  // Initializing and Accessing Heap Array -
  // *arrHeap = 1;
  // or
  *(arrHeap + 0) = 1;
  *(arrHeap + 1) = 2;
  *(arrHeap + 2) = 3;
  *(arrHeap + 3) = 4;

  cout << "Array Heap : Index 2 value : " << *(arrHeap + 2) << endl;

  // ----------------------------------------------------------------------------------------
  // -> STL Arrays -

  // - Declaring and Initializing the array -
  array<int, 5> stlArr = {13, 12, 3, 41, 25};

  // - Iterating through the array -
  cout << "STL array  : ";
  for (int i = 0; i < stlArr.size(); i++) {
    cout << stlArr[i] << " ";
  }
  cout << endl;

  // - Sorting an Array -
  sort(stlArr.begin(), stlArr.end());

  cout << "STL sorted array  : ";
  for (int i = 0; i < stlArr.size(); i++) {
    cout << stlArr[i] << " ";
  }
  cout << endl;

//   - Fill Array -
   array<int, 5> fillArr {};
   fillArr.fill(8);

   cout << "STL filled array  : ";
   for (int i = 0; i < fillArr.size(); i++) {
     cout << fillArr[i] << " ";
   }
   cout << endl;

   // - Other STL Array Methods - 
   cout << "STL Array value at index 2 : " << stlArr.at(2) << endl;
   cout << "STL Array value at front : " << stlArr.front() << endl;
   cout << "STL Array value at back : " << stlArr.back() << endl;


  return 0;
}