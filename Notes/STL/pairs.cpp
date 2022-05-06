// => PAIRS -

// - More on -
// https://www.geeksforgeeks.org/pair-in-cpp-stl/

#include <bits/stdc++.h>
using namespace std;

int main(){
   // Declaring a Pair -
   // Syntax - pair<data_type_1, data_type_2> pair_variable_name;
   pair<int, string> p1;

   // First Method to initailize a pair
   // p1 = make_pair(1, "abc");

   // Second Method to initialize a pair
   p1 = {2, "def"};

   // Accessing the first and second value of the pair
   // cout << "First Pair p1 : " << p1.first << "\n"  << "Second Pair p1 : " << p1.second << endl << endl;
   
   // Declaring and Initializing a pair at the same time
   // Note: By Assigning pair value like this a deep copy of value is assigned meaning any change we do in one pair will not affect the values of the second pair.
   pair<int, string> p2 = p1;
   // cout << "First Pair p2 : " << p2.first << "\n"  << "Second Pair p2 : " << p2.second << endl << endl;

   // Changing a first and second value of the pair  
   p2.first = 3;
   p2.second = "yolo";
   // cout << "First Pair p2 : " << p2.first << "\n"  << "Second Pair p2 : " << p2.second << endl << endl;

   // If we want to assign a reference value just like arrays to pair as well so that any change we do in one pair will affect the values of others also. Then we can use Address of operator to assign to the new pair instead of a value.
   pair<int, string> &p3 = p1;
   // p3.first = 55;
   // p3.second = "You Only Live Once";
   // cout << "First Pair p3 : " << p3.first << "\n"  << "Second Pair p3 : " << p3.second << endl << endl;
   // cout << "New First Pair p1 : " << p1.first << "\n"  << "New Second Pair p1 : " << p1.second << endl;


   int a[3] = {1, 2, 3};
   int b[3] = {4, 5, 6};
   // Declaring Pair of Arrays
   pair<int, int> p_array[3];
   p_array[0] = {1, 4};
   p_array[1] = {2, 5};
   p_array[2] = {3, 6};

   cout << "Size of Pair : " << (sizeof(p_array) / sizeof(int) / 2) << endl;

   // Printing Array Pair
   for(int i = 0; i < (sizeof(p_array) / sizeof(int)) / 2; i++){
      cout << "First In p_array : " <<p_array[i].first << " ";
      cout << "Second In p_array : " <<p_array[i].second << endl;
   }

   return 0;
}

