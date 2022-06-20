#include <iostream>
#include <array>
using namespace std;

int main(){
   // Normal Array - 
   int arr[5] = {1, 2, 3, 4, 5};

   // STL Array -
   // This is also implemented in STL using the above array and therefore the STL array is also static.
   array<int, 5> arrStl = {1, 2, 3, 4, 5};

   for(auto i : arrStl){
      cout << "Item : " << i << endl;
   }

   // at() method
   cout << "Element at 2nd index : " << arrStl.at(2) <<  endl;
   
   // empty() method
   cout << "Is Array STL empty : " << arrStl.empty() << endl;

   // Getting first and last element of STL array
   cout << "First Element of arrStl : " << arrStl.front() << endl;
   cout << "Last Element of arrStl : " << arrStl.back() << endl;

   return 0;
}