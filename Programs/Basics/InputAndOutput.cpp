#include "iostream"
#include "string"

int main(){
int age;
std::string fullName;

// Taking Input with spaces
std::cout << "Please type in your Full Name : " << std::endl;
std::getline(std::cin, fullName);

// Taking Input
std::cout << "Plase type in your age : " << std::endl;
std::cin >> age;

std::cout << "Hello " << fullName << "! You are " << age << " years old" << std::endl;

// Log Message
std::clog << "Log Message : Something happened !" << std::endl;

// Error Message
std::cerr << "Error Message : Something went wrong !" << std::endl;
return 0;
}