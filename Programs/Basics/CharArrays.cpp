#include <bits/stdc++.h>
using namespace std;

int main(){
   // In charachter Arrays -
   // we take the n+1 size of array where n is the number of charachters in input value.
   // we take n+1 size of char array because in the end char array stores a null characher i.e. - '\0' which marks the end of the charachter array.
   char text[] = "Hello";

   // For Normal Array we are required to use loop to for traversing through them or for printing but in case of charachter array we dont need to use loop, we can directly print them.
   cout << "Text : " << text << endl;
   
   // Checking the size of the char array
   cout << "Size of text : "<< sizeof(text) << endl;

   // Traversing the char array until we found null characher in our array -
   int i = 0;
   while(text[i] != '\0'){
      cout << text[i] << endl;
      i++;
   }

   // Taking Input in char array
   char newText[30];
   cin.getline(newText, 30);
   cout << "Printing new Text : " << newText << endl;

   return 0;
}