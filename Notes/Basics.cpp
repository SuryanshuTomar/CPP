// => FIRST PROGRAM -

// This brings in the iostream library
#include <iostream>
int main(){
   // This is going to print "Hello World !!" to the console
   std::cout << "Hello World !!" << std::endl;
   return 0;
   // Program ends here
}

// -------------------------------------------------------------------------------------------------------
// => COMMENTS - 

// 1. // This is a One Liner Comment which starts with "//" double forward slashes
/* 2. 
   This 
   is
   a
   Multiline
   Comment
 */

// Note:
// 1. Block Comments out the block of text and can't be nested.
// 2. Use comments to document the code but don't overdo it

// ----------------------------------------------------------------------------------------------------
// => ERRORS - 

// - There are -
// 1. Compile Time Errors - (Syntax And Semantic Errors)
      // a. Syntax Errors
      // b. Semantic Errors
// 2. Run Time Errors
// 3. Linker Errors
// 4. Logical Errors
// 5. Warnings

// - The goal of every c++ code is to be converted into a binary executable and we have to run through the compiler to be able to do that. And there are set of requirements that the compiler enforces on our code for it to be able to compile successfully into the binary executable code. And these requirements are the rules that a developer has to follow in order to be able to write a c++ code and if these rules are broken then we are going to face problem while running the code and the compiler will show these problems in the form of these 3 types of Errors.


// 1. Syntax Errors - 
// - This kind of errors are occurred, when it violates the rule of C++ writing techniques or syntaxes. This kind of errors are generally indicated by the compiler before compilation. Sometimes these are known as compile time error.
// - In this example, we will see how to get syntax error if we do not put semicolon after one line.

// - Example -
#include<iostream>
int main() {
   std::cout << "Hello World" ;
}
// - Output -
// Error] expected ';' before '}' token

// 2. Runtime Errors -
// - This kind of errors are occurred, when the program is executing. As this is not compilation error, so the compilation will be successfully done. We can check this error if we try to divide a number with 0.

// - Example - 
#include<iostream>
int main() {
   int x = 52;
   int y = 0;
   std::cout << "Div : %f", x/y;
}
// - Output -
// Program crashes during runtime.


// 3. Linker Errors - 
// - This kind of errors are occurred, when the program is compiled successfully, and trying to link the different object file with the main object file. When this error is occurred, the executable is not generated, For example some wrong function prototyping, incorrect header file etc. If the main() is written as Main(), this will generate linked error.

// - Example -
#include<iostream>
int main() {
   int x = 52;
   int y = 0;
   std::cout << "Div : %f", x/y;
}
// - Output -
// C:\crossdev\src\mingw-w64-v3-git\mingw-w64-crt\crt\crt0_c.cundefined reference to `WinMain'


// 4. Logical Errors -
// - Sometimes, we may not get the desired output. If the syntax and other things are correct, then also, we may not get correct output due to some logical issues. These are called the logical error. Sometimes, we put a semicolon after a loop, that is syntactically correct, but will create one blank loop. In that case, it will show desired output.

// - Example -
#include<iostream>
int main() {
   int i;
   for(i = 0; i<5; i++); {
      std::cout << "Hello World";
   }
}
// - Output -
// Here we want the line will be printed five times. But only one time it will be printed for the block of code.

// 5. Semantic Errors -
// - This kind of error occurs when it is syntactically correct but has no meaning. This is like grammatical mistakes. If some expression is given at the left side of assignment operator, this may generate semantic error.

// - Example -
#include<iostream>
int main() {
   int x, y, z;
   x = 10;
   y = 20;
   // x + y = z;
}
// - Output -
// [Error] lvalue required as left operand of assignment

// 6. Warnings - 
// - Compiler warnings are messages produced by a compiler regarding program code fragments to be considered by the developer, as they may contain errors. Unlike compilation errors, warnings don't interrupt the compilation process.


// -------------------------------------------------------------------------------------------------------
// => STATEMENTS -

// 1. A Statement is a basic unit of computation in a c++ program.
// 2. Every C++ program is a collection of statements organized in a certain way to achieve some goal.
// 3. Statements end with a semicolon(;) in C++;
// 4. Statement are executed in order from top to bottom when program is run.
// 5. Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements.

// - Example -
#include "iostream"
int main(int argc, char **argv){
   int firstNumber = 12; // Statement 1
   int secondNumber = 9; // Statement 2

   int sum = firstNumber + secondNumber; // Statement 3
   std::cout << "The sum of the two number is : " << sum << std::endl; // Statement 4
   
   return 0; // Statement 5
}

// ---------------------------------------------------------------------------------------------------------
// => INPUT AND OUTPUT -

// - We can take an input from the console or output something to the console using streams from namespace std(Standard).

// Streams           Purpose
// std::cout         Printing data to the console(terminal)
// std::cerr         Printing erros to the console
// std::clog         Printing log messages to the console
// std::cin          Reading data from the terminal/console

// - Example - 
// Printing Data to console
#include "iostream"
int main(){
std::cout << "The number is : "<< 12 << std::endl;

int age {12};
std::cout << "The age is : " << age << std::endl;

// Printing Error
std::cerr << "std::cerr output : Something went wrong" << std::endl;

// Printing Log message
std::clog << "std::clog output : This is a log message" << std::endl;

return 0;
}

// - Example - 
// Reading Data from console
#include "iostream"
int main(){
int age;
std::string name;

// Taking Input
// std::cout << "Please type in your Last Name : " << std::endl;
// std::cin >> name;

// Taking Input
// std::cout << "Plase type in your age : " << std::endl;
// std::cin >> age;

// Chaining Input
std::cout << "Please type in your Last name and age, seprated by space : " << std::endl;
std::cin >> name >> age;

std::cout << "Hello " << name << "! You are " << age << "years old" << std::endl;
return 0;
}


// - Example - 
// Reading Data from console with space
// Syntax -> std::getLine(stream, storingVariable)
#include "iostream"
#include "string"
int main(){
std::string fullName;

std::cout << "Please type in your Full Name : " << std::endl;
std::getline(std::cin, fullName);

std::cout << "Your name is : " << fullName << std::endl;
return 0;
}