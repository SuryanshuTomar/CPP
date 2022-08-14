#include <iostream>

using namespace std;

class Hero {
   public: 
      int health;
      int damage;
      string level;
};

int main(){
   // Static Object Creation or Object Allocation
   Hero h1;
   // Accesing and initializing the property in static object allocation
   h1.health = 70;
   cout << "Health is : " << h1.health << endl;

   // Dynamic Object Creation or Object Allocation
   Hero *h2 = new Hero;
   // Accesing and initializing the property in dynamic object allocation
   // 1. Using Dereference opeator(*) -
   (*h2).damage = 120;
   cout << "Health is : " << (*h2).damage << endl;
   // 2. Using Arrow operator(->) -
   h2 -> level = "Hard";
   cout << "Level is : " << h2 -> level << endl;


}