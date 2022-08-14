// => What is Object Oriented Programming (OOP) ?
// - Object Oriented Programming is a paradigm that provides many concepts such as inheritance, data binding, polymorphism etc.
// - The programming paradigm where everything is represented as an object is known as truly object-oriented programming language. Smalltalk is considered as the first truly object-oriented programming language.

// -> OOPs (Object Oriented Programming System) -
// - Object means a real word entity such as pen, chair, table etc. Object-Oriented Programming is a methodology or paradigm to design a program using classes and objects. It simplifies the software development and maintenance by providing some concepts:
// 1. Object
// 2. Class
// 3. Inheritance
// 4. Polymorphism
// 5. Abstraction
// 6. Encapsulation

// -> Advantage of OOPs over Procedure-oriented programming language -
// 1. OOPs makes development and maintenance easier where as in Procedure-oriented programming language it is not easy to manage if code grows as the project size grows.
// 2. OOPs provide data hiding whereas in Procedure-oriented programming language a global data can be accessed from anywhere.
// 3. OOPs provide ability to simulate real-world event much more effectively. We can provide the solution of real word problem if we are using the Object-Oriented Programming language.

// ----------------------------------------------------------------------------------------------------
// 1. Object -
// - An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

// - For Example:
// class person
// {
//     char name[20];
//     int id;
// public:
//     void getdetails(){}
// };

// int main()
// {
//    person p1; // p1 is a object 
// }

// - Object take up space in memory and have an associated address like a record in pascal or structure or union in C.
// - When a program is executed the objects interact by sending messages to one another.
// - Each object contains data and code to manipulate the data. Objects can interact without having to know details of each other’s data or code, it is sufficient to know the type of message accepted and type of response returned by the objects.

// ----------------------------------------------------------------------------------------------------
// 2. Class -
// - The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

// - For Example:
// Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

// - A Class is a user-defined data-type which has data members and member functions.
// - Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions define the properties and behaviour of the objects in a Class.
// - In the above example of class Car, the data member will be speed limit, mileage etc and member functions can apply brakes, increase speed etc.
// - We can say that a Class in C++ is a blue-print representing a group of objects which shares some common properties and behaviours.

// ----------------------------------------------------------------------------------------------------
