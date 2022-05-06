// => VECTORS -

// - More on -
// https://www.geeksforgeeks.org/vector-in-cpp-stl/

// - Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

// - Syntax For 1-D Vector-
// vector<data_type/container> vector_variable;

// - Example -
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &vi){
   cout << "Vector Size : " << vi.size() << endl; // vi.size() -> O(1)

   cout << "Vector : ";
   for(int i = 0; i < vi.size(); i++){
      cout << vi[i] << " ";
   }
   cout << endl;
}

int main(){
   
   // Declaring Various dataTypes/container vectors
   // vector<int> i;
   // vector<double> d;
   // vector<string> s;
   // vector<pair<int, int>> p;

   // Declaring and Initalizing the vector
   vector<int> vv = {2, 3, 4, 5};

   // Taking Input in vector
   int vector_size_input;
   // cout << "Enter Vector Size : " ;
   // cin >> vector_size_input;
   // cout << endl;
   vector<int> vi;
   // cout << "Enter Vector Elements : " << endl;
   // for(int i = 0; i < vector_size_input; i++){
   //    int vector_input;
   //    cin >> vector_input;
   //    vi.push_back(vector_input); // O(1)
   // }

   // Displaying the vector
   // printVector(vi);

   // Predefining the size of the vector
   vector<int> v1(10);
   // printVector(v1);

   // Predefining the size of the vector and prefilling the vector
   vector<int> v2(10, 3);
   // printVector(v2);

   vector<int> v3;
   // Adding To the last of the Vector
   v3.push_back(5);
   v3.push_back(6);
   v3.push_back(7);
   // printVector(v3);
  
   // Removing from the last of the Vector
   v3.pop_back();
   // printVector(v3);

   // Adding to the start of the Vector
   v3.insert(v3.begin(), 4);
   // printVector(v3);

   // Removing from the start of the Vector
   v3.erase(v3.begin());
   // printVector(v3);

   // Note: If we assign an array to another array variable then a reference of that array is passed to the array variable and any changes we make to the array using the array variable, those changes will reflect on the original array also. But if do the same with vectors, then original vector reference will not be passed to vector variable instead a copy of that vector will be assigned to the vector variable and therefore any changes made to the assigned vector will not be reflected to the original vector.(Also, we can assign the reference of the vector when assigning by using the address of operator.) For Example -
   vector<int> v4 = v3; // O(n)
   v4.push_back(99);
   printVector(v3);
   printVector(v4);

   return 0;
}