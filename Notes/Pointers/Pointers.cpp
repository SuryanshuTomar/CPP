// => What is Symbol Table? 
// - Symbol Table is an Important Data Structure created and maintained by the compiler in order to keep track of semantics of vairables -> i.e - it stores information about the scope and binding information about names, information about instances of various entities such as variables, function names, classes, objects etc

// => What are Pointers and why do we need it?
// - Pointers are containers used to store values just like variable. The only difference is that pointers are used to store a memory location
// - Pointers can only be declared the same data type it has been referenced to. Like - an integer pointer can only points to an integer value.
// - We can also deference a pointer to get the value that the pointer memory address is holding and change its value also. And this is called dereferencing of a pointer.
// - It is must for Pointers to assign a value which points to a similar data type memory address otherwise pointers can not be used for dereferencing.
// - Generally the size of a pointer is 8 bytes as pointers stores the address in hexadecimal form


// => Bad Practice -
// 1. Never in your program declare a pointer without intializing its value. It is considered bad practice because without initializing the pointer variable it will hold a garbage value in memory which might leave our memory prone to security threat as using that memory data can be derefenced and changed. Sometimes the compiler can also throw Segmentation Error.





// => Address of Operator (&) -
// - The address of a variable can be obtained by preceding the name of a variable with an ampersand sign (&), known as the address-of operator.
// - The & character in C++ is dual purpose. It can mean (at least)
//    - Take the address of a value
//    - Declare a reference to a type

// Example:
// int *p = &var1;   // p holds the address of var1;
// - This would print the address of variable var; by preceding the name of the variable var with the address-of operator (&), we are no longer printing the content of the variable itself but its address.
// string &s2 = s1;  // s2 is now a reference to s1


// Example:
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 10;
//     int * p;
//     p = & i;
//     cout << "Address of the variable i is " << p << endl;
//     cout << "Address of the pointer p is " << & p;
//     return 0;
// }
// Output:
// Address of the variable i is 0x7fff32eb4bb4
// Address of the pointer p is 0x7fff32eb4bb8

// - Here,  we have an integer i and an integer pointer p. The address of(&) operator is used to address i in p that returns the variable’s address. e.g., &i will give us the address of variable i.

// Note:
// - A reference is not a pointer, they're different although they serve similar purpose. You can think of a reference as an alias to another variable, i.e. the second variable having the same address. It doesn't contain address itself, it just references the same portion of memory as the variable it's initialized from.
// string s = "Hello, world";
// string* p = &s; // Here you get an address of s
// string& r = s; // Here, r is a reference to s    

// s = "Hello, world"; // corrected
// assert( s == *p ); // this should be familiar to you, dereferencing a pointer
// assert( s == r ); // this will always be true, they are twins, or the same thing rather

// string copy1 = *p; // this is to make a copy using a pointer
// string copy = r; // this is what you saw, hope now you understand it better.





// => Dereference Operator -
// - As just seen, a variable that stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store.
// - An exciting property of pointers is that they can access the variable they point to directly. This is done by preceding the pointer name with the dereference operator (*). The operator itself can be read as "value pointed to by.”

// - The reference and dereference operators are thus complementary:
//    1. & is the address-­of operator and can be read simply as "address of.”
//    2. * is the dereference operator and can be read as "value pointed to by.”
 

// Note: 
// - The asterisk (*) used when declaring a pointer only means that it is a pointer (it is part of its type compound specifier) and should not be confused with the dereference operator seen above, but which is also written with an asterisk (*). They are simply two different things represented with the same sign.

// Example:
// #include <iostream>
// using namespace std;

// int main() {
//     int firstvalue = 5, secondvalue = 15;
//     char thirdvalue = 'a';
//     int * p1, * p2;
//     char * p3;
//     p1 = & firstvalue; // p1 = address of firstvalue
//     p2 = & secondvalue; // p2 = address of secondvalue 
//     p3 = & thirdvalue; // p3 = address of thirdvalue
//     * p1 = 10; // value pointed to by p1 = 10
//     * p2 = * p1; // value pointed to by p2 = value pointed to by p1
//     p1 = p2; // p1 = p2 (value of pointer is copied)
//     * p1 = 20; // value pointed to by p1 = 20
//     * p3 = 'b'; // value pointed to by p3 = ‘b ’
//     cout << "firstvalue is " << firstvalue << endl;
//     cout << "secondvalue is " << secondvalue << endl;
//     cout << "thirdvalue is " << thirdvalue << endl;
//     return 0;
// }
// Output:
// firstvalue is 10
// secondvalue is 20
// thirdvalue is b

 




// => Pointer Arithmetic -
// - Arithmetic operations on pointers behave differently than they do on simple data types we studied earlier. Only addition and subtraction operations are allowed; the others aren’t allowed on pointers. But both addition and subtraction have slightly different behavior with pointers, according to the size of the data type to which they point.
// - For example, char always has a size of 1 byte, short is generally larger than that, and int and long are even larger; the exact size of these depends on the system. For example, let's imagine that in a given system, char takes 1 byte, short takes 2 bytes, and long takes 4.

// - Suppose now that we define three-pointers:
// char *mychar; 
// short *myshort;
// long *mylong;

// - and they point to the memory locations 1000, 2000, and 3000, respectively.
// - Therefore, if we write:
// ++mychar;
// ++myshort;
// ++mylong;

// - mychar, as one would expect, would contain the value 1001. But not so obviously, myshort would contain the value 2002, and mylong would contain 3004, even though they have each been incremented only once. The reason is that, when adding one to a pointer, the pointer is made to point to the following element of the same type, and, therefore, the size in bytes of the type it points to is added to the pointer.

// - This is applicable both when adding and subtracting any number to a pointer. It would happen the same if we wrote:
// mychar = mychar + 1; 
// myshort = myshort + 1; 
// mylong = mylong + 1;
 
// - Essentially, these are the four possible combinations of the dereference operator with both the prefix and suffix versions of the increment operator (the same applies to the decrement operator).
// - 
// Pointers may be compared by using relational operators, such as ==, <, and >. If p1 and p2 point to variables related to each other, such as the same array elements, then p1 and p2 can be meaningfully compared.


