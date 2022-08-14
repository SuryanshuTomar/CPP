#include <iostream>

// import Class from another file
#include "Support.cpp"

using namespace std;

// Class "Hero"
class Hero {
   // properties
   int health;
   char level;

};

// Empty Class
class Villian {
   //properties
};

int main(){
   // Creating Object "h1" of "Hero" class data type
   Hero h1;

   // Creating Object "v1" of empty "Villian" class data type
   Villian v1;
   
   // Creating Object "s1" of imported "Support" class data type
   Support s1;

   cout << "size : " << sizeof(h1) << endl;
   // returning 8 bytes because of properties size inside of h1 object which 4 bytes for health of int type and 4 bytes for level of char32 type.

   cout << "size : " << sizeof(v1) << endl;
   // In case of empty class, the size of object will be 1 byte in order to just identify that the class object is instantiated.

   // Checking the size of the imported class Support
   cout << "size : " << sizeof(s1) << endl;


   return 0;
}