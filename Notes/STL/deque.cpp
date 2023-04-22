#include <array>
#include <deque>
#include <iostream>

using namespace std;

void printDeque(deque<int> &dq) {
  cout << "Deque : ";
  for (auto elem : dq) {
    cout << elem << " ";
  }
  cout << endl;
}

int main() {
  // Declaring a deque -
  deque<int> first;

  // Declaring and Initializing a deque -
  deque<int> second(
      4, 100); // This will create a deque which has 4 values filled with 100.

  // Creating a deque from another deque -
  deque<int> third(second.begin(), second.end());
  // or
  deque<int> fourth(third);

  // Creating a deque from an array -
  int arr1[] = {1, 2, 4, 5, 6};
  int size1 = sizeof(arr1) / sizeof(int);
  deque<int> fifth(arr1, arr1 + size1);
  // or
  array<int, 5> arr2 = {1, 2, 4, 5, 6};
  int size2 = arr2.size();
  deque<int> sixth(arr2.begin(), arr2.end());

  // Printing the Deque -
  printDeque(sixth);

  // Pushing element at the start and the end of the deque -
  //   sixth.push_front(10);
  //   sixth.push_back(20);
  //   printDeque(sixth);

  // Pop element at the start and the end of the deque -
  //   sixth.pop_front();
  //   sixth.pop_back();
  //   printDeque(sixth);

  // Access the front and the back of the deque - 
  cout << "Front of deque : " << sixth.front() << endl;
  cout << "Back of deque : " << sixth.back() << endl;

  return 0;
}