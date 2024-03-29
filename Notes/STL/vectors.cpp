// => VECTORS -

// - More on -
// https://www.geeksforgeeks.org/vector-in-cpp-stl/

// - Vectors are same as dynamic arrays with the ability to resize itself
// automatically when an element is inserted or deleted, with their storage
// being handled automatically by the container. Vector elements are placed in
// contiguous storage so that they can be accessed and traversed using
// iterators. In vectors, data is inserted at the end. Inserting at the end
// takes differential time, as sometimes there may be a need of extending the
// array. Removing the last element takes only constant time because no resizing
// happens. Inserting and erasing at the beginning or in the middle is linear in
// time.
// - We can also use the "Shrink to fit" functionality of the vector to reduce
// the size of the array by removing the empty spaces at the end of the vector.

// - Syntax For 1-D Vector-
// vector<data_type/container> vector_variable;

// - Example -
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &vi) {
  cout << "Vector Size : " << vi.size() << endl; // vi.size() -> O(1)

  cout << "Vector : ";
  for (int i = 0; i < vi.size(); i++) {
    cout << vi[i] << " ";
  }
  cout << endl;
}

int main() {

  // Declaring Various dataTypes/container vectors
  // vector<int> i;
  // vector<double> d;
  // vector<string> s;
  // vector<pair<int, int>> p;

  // Declaring and Initalizing the vector
  vector<int> v = {2, 3, 4, 5};

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

  // Copy all the elements from an array to the vector
  int arr[5] = {1, 2, 3, 4, 5};
  vector<int> arrCopy(arr, arr + 5);

  // Copy all the elements from an vector to the vector
  vector<int> vecCopy(arrCopy);

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

  // Removing a range of elements from the Vector
  v3.erase(v3.begin(), v3.begin() + 2);
  // printVector(v3);

  // Get the size of the vector
  v3.size();
  // printVector(v3);

  // Get the capacity of the vector
  v3.capacity();
  // printVector(v3);

  // To know the max size avialable for the vector to expand
  v3.max_size();
  // printVector(v3);

  // Note: If we assign an array to another array variable then a reference of
  // that array is passed to the array variable and any changes we make to the
  // array using the array variable, those changes will reflect on the original
  // array also. But if do the same with vectors, then original vector reference
  // will not be passed to vector variable instead a copy of that vector will be
  // assigned to the vector variable and therefore any changes made to the
  // assigned vector will not be reflected to the original vector.(Also, we can
  // assign the reference of the vector when assigning by using the address of
  // operator.) For Example -
  vector<int> v4 = v3; // O(n)
  v4.push_back(99);
  printVector(v3);
  printVector(v4);

  return 0;
}

// ----------------------------------------------------------------------------------------------------
// -> Nested Vectors -

// - Nested Vector Pair -
#include <bits/stdc++.h>
using namespace std;

void printNestedVector(vector<pair<int, int>> &vp) {
  cout << "Size of vector : " << vp.size() << endl;

  for (int i = 0; i < vp.size(); i++) {
    cout << "{ " << vp[i].first << ", " << vp[i].second << " }" << endl;
  }
}
int main() {
  // Nested Vector of Pairs
  vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};

  // Displaying Vector with Nested Pair
  // printNestedVector(vp);

  // Taking Input in Nested Vector Pair
  vector<pair<int, int>> vp1;
  int input_size;
  cout << "Enter Input size for nested vector pair : ";
  cin >> input_size;
  for (int i = 0; i < input_size; i++) {
    int f, s;
    cin >> f >> s;
    vp1.push_back({f, s});
  }
  printNestedVector(vp1);

  return 0;
}

// - Nested Vector Array -

int main() {
  // Declaring Array of Vectors
  vector<int>
      v[10]; // Array of 10 vectors are created with initial size of zero.

  int N;
  cout << "Enter Size of Array of Vectors : ";
  cin >> N;
  vector<int> va[N];
  for (int i = 0; i < N; i++) {
    int x;
    cout << endl << "Enter Vector size : ";
    cin >> x;
    cout << endl << "Enter Vector elements : ";
    for (int j = 0; j < x; j++) {
      int y;
      cin >> y;
      va[i].push_back(y);
    }
  }

  // Printing Array of Vectors
  cout << "Array of Vectors : " << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < va[i].size(); j++) {
      cout << va[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

// - Nested Vector Of Vector (2-d Vector) -

int main() {
  // Declaring Dynamic Matrix or 2-D Array or Nested Vectors or Vectors
  vector<vector<int>> vv;

  // Taking Input in Vector of Vectors
  int vv_input;
  cout << "Enter Size for Vector of Vector : ";
  cin >> vv_input;

  for (int i = 0; i < vv_input; i++) {
    int v_input;
    cout << "Enter Size for " << i + 1 << " vector : " << endl;
    cin >> v_input;
    cout << "Enter Elements : ";
    vector<int> temp;
    for (int j = 0; j < v_input; j++) {
      int element;
      cin >> element;
      temp.push_back(element);
    }
    vv.push_back(temp);
  }

  // Printing Vector of Vector
  cout << "Vector of Vector : " << endl;
  for (int i = 0; i < vv.size(); i++) {
    for (int j = 0; j < vv[i].size(); j++) {
      cout << vv[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}