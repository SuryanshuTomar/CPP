#include <iostream>
using namespace std;

class Hero {
   private:
      int health;
   
   public:
      int damage;
      string level;

   // Default Constructor
   Hero(){
      cout << "Constructor Called !!" << endl;
   }
   
   // Parameterized Constructor
   Hero(int health){
      // Initializing the health property at the time of object creation
      // (*this).health = health;
      // this is a pointer that points to the current object of the current class
      // or we can also do it like this -
      this -> health = health;
      cout << "Address of 'this' pointer : " << this << endl;
   }

   // Parameterized Constructor
   Hero (int health, string level){
      this -> health = health;
      this -> level = level;
   }

   void appraisel(){
      cout << "Health is  : " << this -> health << endl;
      cout << "Level  is : " << this -> level << endl;
   }
};

int main(){
   // Creating Object statically
   Hero hulk;
   // Creating Object dynamically
   Hero *spiderman = new Hero;
   // Hero() constructor will be called just by object creation and "Constructor Called !!" will be printed.

   // Using parameterised constructor statically
   Hero thor(200);
   cout << "Address of 'thor' object : " << &thor << endl;
   // "this" pointer always points to the current object and the above statement proves it.

   // Using parameterised constructor dynamically
   Hero *ironman = new Hero(100, "Supreme");
   ironman -> appraisel();
   
  return 0;
}