
#include <iostream>
using namespace std;

int notes(){
      int amount = 1595;
 
      cout << "100 Notes : " << amount / 100;
      amount = amount - (amount / 100) * 100;  
      cout << endl;
      
      cout << "50 Notes : " << amount / 50;
      amount = amount - (amount / 50) * 50;  
      cout << endl;

      cout << "20 Notes : " << amount / 20;
      amount = amount - (amount / 20) * 20;  
      cout << endl;

      cout << "1 Notes : " << amount / 1;
      cout << endl;
}

void minAndMaxInArray(){
      int arrLength;
      cout << "Enter the length of array : ";
      cin >> arrLength;

      int arr[100];
      cout << "Now Enter " << arrLength << " elements with space between them : ";
      int min = INT_MAX;
      int max = INT_MIN;
      for(int i = 0; i < arrLength; i++){
            cin >> arr[i];
            if(arr[i] < min){
                  min = arr[i];
            }
            if(arr[i] > max){
                  max = arr[i];
            }
      }

      cout << "Your Entered Array is : ";
      for(int i = 0; i < arrLength; i++){
            cout << arr[i] << " ";
      }
      cout << endl << "Max : " << max << " and Min : " << min << endl; 

}

int main(){

      //Q1 - Finding Number of Notes required of the amount -
      notes();
      
      // Q2 - Minimum and Maximum in an array -
      minAndMaxInArray();

   return 0;
}