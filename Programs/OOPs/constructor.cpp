#include <iostream>
using namespace std;

class Hero {
   private:
      int health;
   
   public:
      int damage;
      string level;

   // Default Constructor -
   Hero(){
      cout << "Constructor Called !!" << endl;
   }
   
   // Parameterized Constructor -
   Hero(int health){
      // Initializing the health property at the time of object creation
      // (*this).health = health;
      // this is a pointer that points to the current object of the current class
      // or we can also do it like this -
      this -> health = health;
      cout << "Address of 'this' pointer : " << this << endl;
   }

   // Parameterized Constructor -
   Hero (int health, string level){
      this -> health = health;
      this -> level = level;
   }

   // Creating Custom Copy Constructor
   Hero (Hero &temp) {
      cout << "Custom Copy Constructor Called !!" << endl;
      this -> health = temp.health;
      this -> damage = temp.damage;
      this -> level = temp.level;
   }

   void appraisel(){
      cout << "Health is  : " << this -> health << endl;
      cout << "Damage  is : " << this -> damage << endl;
      cout << "Level  is : " << this -> level << endl;
   }
};

int main(){
   // Creating Object statically -
   Hero hulk;
   // Creating Object dynamically - 
   Hero *spiderman = new Hero;
   // Hero() constructor will be called just by object creation and "Constructor Called !!" will be printed.

   // Using parameterised constructor statically - 
   Hero thor(200);
   cout << "Address of 'thor' object : " << &thor << endl;
   // "this" pointer always points to the current object and the above statement proves it.

   // Using parameterised constructor dynamically - 
   Hero *ironman = new Hero(100, "Supreme");
   ironman -> appraisel();

   // Copy Constructor -
   Hero hawkEye(90, "Medium");
   // This is is copy constructor
   Hero blackWidow(hawkEye);
   // Another Way to call copy constructor 
   Hero vision = hawkEye;

   // Checking if the hawkEye object constructor value gets copied or not
   cout << "HawkEye Appraisel  : " << endl;
   hawkEye.appraisel();
   cout << "Black Widow Appraisel : "  << endl;
   blackWidow.appraisel();

  return 0;
}