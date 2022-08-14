#include <iostream>
#include <cstring>
using namespace std;

class Hero {
   private:
      string name;
      int health;
      int damage;

   public:
      char *level;

      Hero(){
         cout << "Default Constructor Called !!" << endl;
         level = new char[5];
      }

      Hero(string name, int health, int damage){
         (*this).name = name;
         (*this).health = health;
         (*this).damage = damage;
      }

      // Copy constructor for Deep Copy -
      Hero(Hero &temp){
         cout << "Copy Constructor Called !!" << endl;
         char *ch = new char[10];
         strcpy(ch, temp.level);

         this -> name = temp.name;
         this -> health = temp.health;
         this -> damage = temp.damage;
         this -> level = ch;
      }

      string getName(){
         return name;
      }
      void setName(string name) {
         this -> name = name;
      }

      int getHealth(){
         return health;
      }
      void setHealth(int health) {
         this -> health = health;
      }

      int getDamage(){
         return damage;
      }
      void setDamage(int damage) {
         this -> damage = damage;
      }

      char* getLevel(){
         return level;
      }
      void setLevel(char level[]){
         strcpy(this -> level, level);
      }


      void printStats(){
         cout << endl << "[ ";
         cout << "Name : " << this -> name << ", ";
         cout << "Health : " << this -> health << ", ";
         cout << "Damage : " << this -> damage << ", " ;
         cout << "Level : " << this -> level << " ]" << endl;
      }
};

int main(){ 
   Hero superhero1;
   superhero1.setName("Superman");
   superhero1.setDamage(600);
   superhero1.setHealth(100);
   char level1[3] = "SS";
   superhero1.setLevel(level1);
   Hero superhero2(superhero1);

   // printing stats 
   superhero1.printStats();
   superhero2.printStats();

   // Changing the values of superhero1
   superhero1.setName("Wonder Woman");
   superhero1.setDamage(450);
   superhero1.setHealth(90);
   char level2[2] = "A"; // Shallow Copy
   superhero1.setLevel(level2);

   // printing stats 
   superhero1.printStats();
   superhero2.printStats();
   // Copy Constructor always creates a shallow copy of an object. So superhero2 object values will also change here But this is only applicable on objects values and not on primitive values.


   return 0;
}