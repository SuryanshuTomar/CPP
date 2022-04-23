#include <iostream>
using namespace std;

int findPower(int a, int b){
   int ans = 1;

   for(int i = 1; i <= b; i++){
      ans = ans * a;
   }
   return ans;
}

int main(){

   int num, power;
   cout << "Enter the num and power : ";
   cin >> num >> power;
   int answer = findPower(num, power);
   cout << "Answer for " << num << "^" << power << " is : " << answer;
   return 0;
} 