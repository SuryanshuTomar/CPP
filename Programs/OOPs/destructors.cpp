#include <iostream>
using namespace std;

class Hero {
   private:
      string name;
      int health;
      int damage;

   public:
      char *level;

   // - Creating Destructor - 
   // It is used to deallocate memory for the object that is out of scope.
   // Difference between destructor and constructor naming is that desctructor starts with a tilde "~" sign
   ~Hero(){
      cout << "Custom Destructor Called !!" << endl;
   }

};

int main(){
   // Static object allocation
   Hero h1;
   // Destructor will be called automatically for this static object allocation.s
   
   // Dynamic object allocation
   Hero *h2 = new Hero;
   // Destructor will not be called automatically for dynamic object allocation and we have to call the desctructor manually using 'delete' operator.
   delete h2;

   return 0;
}