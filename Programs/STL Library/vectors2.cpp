#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
   // How array is declared
   array<int, 3> arr = {1, 2, 3};
   // How vector is declared
   vector<int> vec = {1, 2, 3};

  // checking the capacity of the vector
  cout << "Vector Capacity : " << vec.capacity() << endl;

  // checking the size of the vector
  cout << "Vector Size : " << vec.size() << endl;

  // Pushing an element in the vector 
  vec.push_back(4);
  cout << "Capacity of vector after pushing an element : " << vec.capacity() << endl;
  cout << "Size of vector after pushing an element : " << vec.size() << endl;

  // Popping an element in the vector 
  vec.pop_back();
  cout << "Capacity of vector after popping an element : " << vec.capacity() << endl;
  cout << "Size of vector after popping an element : " << vec.size() << endl;

  // Unshifting an element from the vector
  vec.insert(vec.begin(), 0);
  cout << "Capacity of vector after unshifting an element : " << vec.capacity() << endl;
  cout << "Size of vector after unshifting an element : " << vec.size() << endl;

  // Shifting an element from the vector
  vec.erase(vec.begin());
  cout << "Capacity of vector after shifting an element : " << vec.capacity() << endl;
  cout << "Size of vector after shifting an element : " << vec.size() << endl;

  // Checking the element at a particular index of vector using at() method
  cout << "Element at 2nd index : " << vec.at(2) << endl;

  // Checking if the vector is empty using empty() method
  cout << "Is Vector empty : " << vec.empty() << endl;

  // Getting first and last element of STL Vector
  cout << "First Element of Vector : " << vec.front() << endl;
  cout << "Last Element of Vector : " << vec.back() << endl;

  // Clearing a Vector
  cout << "Vector Before clearing it : ";
  for(auto i : vec){
   cout << i;
  }
  cout << endl;

  vec.clear();
  cout << "Vector After clearing it : ";
  for(auto i : vec){
   cout << i;
  }
  cout << endl;

   return 0;
}