#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {2, 3, 4, 5, 6};
   
   cout << "Vector print normal way : ";
   // Printing a vector normal way -
   for(int i = 0; i < v.size(); i++){
      cout << v[i] << " ";
   }
   cout << endl;

   // Printing a vector using iterator -
   cout << "Vector print using iterator : ";
   // 1. Declaring an iterator
   vector<int>::iterator it;
   for(it = v.begin(); it != v.end(); it++){
      cout << *it << " ";
   }
   cout << endl;
   
   // Declaring and printing vector of pairs using iterators.
   vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
   vector<pair<int, int>>::iterator vp_it;

   for(vp_it = vp.begin(); vp_it!= vp.end(); vp_it++){
      // One way to access pair inside a container 
      // cout << (*vp_it).first << " " << (*vp_it).second << " ";
      // Another better way to access pair inside a container using iterator access 
      cout << (vp_it->first) << " " << (vp_it->second) << " ";
      cout << endl;
   }

   return 0;
}