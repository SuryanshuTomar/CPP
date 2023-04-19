#include <iostream>
#include <string>

consteval int get_value() {
	return 3;
}

int main() {
	constexpr int value = get_value();
	std::string str = " This is a string ";
	std::cout << "Hello World : " << value << str << std::endl;
	
	std::cerr << "This is an Error showing " << std::endl;
	std::clog << "This is a Log showing " << std::endl;
	

	std::string fullName{};
	std::cout << "Enter your full name : " << std:: endl;	
	std::getline(std::cin, fullName);
	std::cout << "Your name is : " << fullName << std::endl;
	
	std::cin.get();
}