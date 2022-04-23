#include <iostream>
using namespace std;

// Note: 
// 1. We cannot give float Numbers and Strings as switch conditions.
// 2. We cannot use continue in switch statements

// Nesting Switch Case -
int main(){ 
   char ch = '3';
   int num = 3;

   cout << endl;
   switch(ch){
      case '1': cout << "First";
         break;
      case '2': cout << "Second";
         break;
      case '3': switch(num){
            case 3: cout << "Third";
               break;
            case 4: cout << "Fourth";
               break;
         }
         break;
      default: cout << "Other";
         break;
   }
   return 0;
}

// Program to print the number of days in a month -
// int main() {

//    int year, month;
//    cout << "Enter the year and month : ";
//    cin >> year >> month;

//    if(year < 1000 || year > 10000){
//       cout << "Invalid year entered !!";
//       exit(0);
//    }
//    switch(month){
//       case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 
//          cout << "Month has 29 days." : cout << "Month has 28 days.";
//          break;
//       case 4:
//       case 6:
//       case 9:
//       case 11: cout << "Month has 30 days.";
//          break;
//       case 1:
//       case 3:
//       case 5:
//       case 7:
//       case 8:
//       case 10:
//       case 12: cout << "Month has 31 days.";
//          break;
//       default: cout << "Invalid input entered !!!";
//          break;
//    }
//    return 0;
// }