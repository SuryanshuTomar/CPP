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


// --------------------------------------------------------------------------------------------------------
// => C++ PROGRAM EXECUTION MODEL AND MEMORY MODEL - 


// --------------------------------------------------------------------------------------------------------
// => CORE FEATURES VS STANDARD LIBRARY VS STL -


// --------------------------------------------------------------------------------------------------------
// => How C++ Works - 

// 1. There are preprocessor statement are in cpp programs. And any statement that starts with a "#" is a Preprocessor Statement. And the "#" is called Preprocessor Directive
// 2. Before compiling any other statement in the program, the compiler processes these preprocessor statements. The files/programs involing these preprocessor statements now gets copied to our current program so that we can use the functions and features of the files that involves these preprocessor statements.

// eg- #include<iostream>  -> this is a preprocessor statement and "include<iostream>" is a header files

// 3. After all the preprocessor statements get processed. Our compiler in Cpp program start executing statements line by line from the int main() function. This "int main()" is the starting point of any cpp program and without it we won't be able to execute/run our cpp program and compiler will also throw an error.
// 4. So when our compiler has done executing the code line by line, this means that our code has now been converted to low-level code to machine-level code(machine code -> binary code). And an obj(object) file will be created. And when we build our code, a exe(executable) file will be created which we can run as a command line application.

// Note: 1. If we create a cpp application using applications like visual studio, Then if we create mutliple files and declare those function at the top of our main program and we build our project, then the linker will find if the definition of those function we declared at the start of our program, exists in our project or not. And if they exist then the those definition will be executed otherwise it will throw an error.
// 2. But if we are not creating a cpp application and simply creating these files for our project, then we have to manually include those file in our main program file along.



// --------------------------------------------------------------------------------------------------------
// => Header Files - 




// --------------------------------------------------------------------------------------------------------
// => DATA TYPES AND VARIABLES - 

// - Data Types -
// 1. int - used to represent whole numbers or integers
// 2. double and float - used to represent decimal numbers
// 3. char - used to represent charachter values.
// 4. bool - used to represent values in true or false which will be stored as binary in memory
// 5. string - used to represent string values

// Other keywords we can use
// 1. void - it is used when we don't want to specify any data type and is typeless
// 2. auto - this keyword is used when we want the compiler to automatically detect the type of the value.

// - Variables - 
// - Variable is basically nothing but the name of a memory location that we use for storing specific types of data. 
// - We can change the value of a variable in C or any other language, and we can also reuse it multiple times.
// Syntax - For Variable Declaration and Initialization
// Variable Declaration with may contain random garbage value -
// -> data_type variable_name;

// A. Assignment Variable Initialization -
// Variable Declaration And Initailization -
// -> data_type variable_name = value;

// B. Braced Variable Initialization - 
// - Variable Declaration Braced Initialization which Initializes the variable to default value -
// -> data_type variable_name {};

// - Variable Initialization to some value -
// -> data_type variable_name {value};

// - Variable Initialization can be expressions also -
// -> data_type variable_name {value1 + value2};

// - Variable Initialization with values other then the specified type -
// -> data_type variable_name {non_specified_type_value}; // O/P -> Error/Warning

// C. Functional Variable Initialization - 
// - Variable Initialization to some value -
// -> data_type variable_name (value);

// - Variable Initialization can be expressions also -
// -> data_type variable_name (value1 + value2);

// - Variable Initialization with values other then the specified type -
// -> data_type variable_name {non_specified_type_value}; // Implicit Type Conversion of value will occur.

// Note: It is preferable to use Braced Type Intialization.

// 1. Integers - 
// - Keyword - int
// - Stores Integers, whole numbers
// - Typically occypies 4 bytes(32bits) or more in memory


// --------------------------------------------------------------------------------------------------------
// => Number System -

// - Number System allows us to transform data from what is convinient to us in reading and write to a form what is convinient for the Computer System. 
// - We can also use the Number System for vice versa also.

// Representing 15 in different number systems - 
// int number1 = 15; // Decimal 
// int number2 = 017; // Octal
// int number3 = 0x0f; // Hexadecimal
// int number4 = 0b00001111; // Binary - C++14

// Article for More - https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b

// Note: 
// 1. All data is represented by a bunch of grouped cells of 0's and 1's in memory.
// 2. As the range of your data grows, so will the number of digits you need to represent the data in the memory.
// 3. Hexadecimal system makes it a little easier for humans to handle streams of data with 1's and 0's
// 4. Octal has the same goal as Hexadecimal, but its almost no longer used in modern times.


// ---------------------------------------------------------------------------------------------------------