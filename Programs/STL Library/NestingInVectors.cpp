#include <bits/stdc++.h>
using namespace std;

void printNestedVector(vector<pair<int, int>> &vp){
   cout << "Size of vector : " << vp.size() << endl;
   
   for(int i = 0; i< vp.size(); i++){
      cout << "{ " << vp[i].first << ", " << vp[i].second << " }" << endl;
   }
}

int main(){
   // Nested Vector of Pairs
   vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};

   // Displaying Vector with Nested Pair
   // printNestedVector(vp);

   // Taking Input in Nested Vector Pair
   vector <pair<int, int>> vp1;
   // int input_size;
   // cout << "Enter Input size for nested vector pair : ";
   // cin >> input_size;
   // for(int i = 0; i < input_size; i++){
   //    int f, s;
   //    cin >> f >> s;
   //    vp1.push_back({f, s});
   // }
   // printNestedVector(vp1);


   // Declaring Array of Vectors
   vector<int> v[10]; // Array of 10 vectors are created with initial size of zero.

   int N;
   // cout << "Enter Size of Array of Vectors : ";
   // cin >> N;
   // vector<int> va[N];
   // for(int i = 0; i < N; i++){
   //    int x;
   //    cout << endl << "Enter Vector size : ";
   //    cin >> x;
   //    cout << endl << "Enter Vector elements : ";
   //    for(int j = 0; j < x; j++){
   //       int y;
   //       cin >> y;
   //       va[i].push_back(y);
   //    }
   // }

   // Printing Array of Vectors
   // cout << "Array of Vectors : " << endl;
   // for (int i = 0; i < N; i++){
   //    for(int j = 0; j < va[i].size(); j++){
   //       cout << va[i][j] << " ";
   //    }
   //       cout << endl;
   // }
   
   // Declaring Dynamic Matrix or 2-D Array or Nested Vectors or Vectors
   vector<vector<int>> vv;

   // Taking Input in Vector of Vectors
   int vv_input;
   cout << "Enter Size for Vector of Vector : ";
   cin >> vv_input;

   for (int i = 0; i < vv_input; i++){
      int v_input;
      cout << "Enter Size for " << i+1 << " vector : " << endl;
      cin >> v_input;
      cout << "Enter Elements : ";
      vector<int> temp;
      for (int j = 0; j < v_input; j++){
         int element;
         cin >> element;
         temp.push_back(element);
      }
      vv.push_back(temp);
   }
   

   // Printing Vector of Vector
   cout << "Vector of Vector : " << endl;
   for (int i = 0; i < vv.size(); i++){
      for(int j = 0; j < vv[i].size(); j++){
         cout << vv[i][j] << " ";
      }  
      cout << endl;
   }

   return 0;
}