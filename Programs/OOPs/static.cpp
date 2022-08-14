#include <iostream>
using namespace std;

class Hero {
   private:
      string name;
      int health;
      int damage;

   public:
      char *level;
      static int timeToComplete; // class level/static Data Member or property

      static void print(){ // class level function or static function
      // static function can only access static properties or static data member.
         cout << "Hero Class" << endl;
         cout << "Time to complete is : " << timeToComplete << endl;
      }

};

// - Initializing class level/static properties or data members.
// We can only initialize the static member outside of the main() function.
// We can access the static members with the help of class name and scope resolution operator(::).
// - Syntax - dataType className::staticVariableName = value
int Hero::timeToComplete = 10;

int main(){
   // Accessing the static member of a class.
   cout << "Time to complete : " << Hero::timeToComplete << endl;

   // Accessing static functions
   Hero::print();
   return 0;
}