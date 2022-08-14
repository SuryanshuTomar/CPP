#include <iostream>

using namespace std;

class Hero {
   // Access Modifier "private"
   private:   
      int damage;

   // Access Modifier "public"
   public:
      int health;
      char level;
      
   // Creating getter for damage private property
   int getDamage(){
      return damage;
   }

   // Creating setter for damage private property
   void setDamage(int damagePoint){
      damage = damagePoint;
   }

};

int main(){
   Hero h1;

   // Accessing public property "health" of class "Hero" through object "h1" using a dot operator
   // Initially garbage value will be printed since "health" value is not yet initialized
   cout << "Health is : " << h1.health << endl;
   // Similary,
   cout << "Level is : " << h1.level << endl;
   // But we can't access/modify private properties outside of class directly and it will throw error.
   // cout << "Damage is : " << h1.damage << endl;

   // Initializing the public properties of the "Hero" class
   h1.health = 70;
   h1.level = 'S';
   cout << "Health is : " << h1.health << endl;
   cout << "Level is : " << h1.level << endl;

   // Using Getters and Setters to access and initialize the private property "damage" of class "Hero"
   h1.setDamage(100);
   cout << "Damage is : " << h1.getDamage() << endl;
}