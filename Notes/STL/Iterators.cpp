// =>  WHAT ARE ITERATORS -

// - An iterator is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container. They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them. Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers. The most obvious form of an iterator is a pointer. A pointer can point to elements in an array and can iterate through them using the increment operator (++). But, all iterators do not have similar functionality as that of pointers. Depending upon the functionality of iterators they can be classified into five categories, as shown in the diagram below with the outer one being the most powerful one and consequently the inner one is the least powerful in terms of functionality.
// - Syntax : 
//    container_declaration::iterator variable_name;



// => TYPES OF ITERATORS -
// - Types of iterators: Based upon the functionality of the iterators, they can be classified into five major categories:

// 1. Input Iterators: They are the weakest of all the iterators and have very limited functionality. They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially, such that no element is accessed more than once.
// 2. Output Iterators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.
// 3. Forward Iterator: They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators. But, as the name suggests, they also can only move in a forward direction and that too one step at a time.
// 4. Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators, as they can move in both the directions, that is why their name is bidirectional.
// 5. Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests, they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.




// -> Now each one of these iterators are not supported by all the containers in STL, different containers support different iterators, like vectors support Random-access iterators, while lists support bidirectional iterators. The whole list is as given below:

// CONTAINER                        TYPE OF ITERATOR SUPPORTED
// Vector                              Random-Access
// Deque                               Random-Access
// List                                Bidirectional
// Map                                 Bidirectional
// Multimap                            Bidirectional
// Set                                 Bidirectional
// Mutliset                            Bidirectional
// Stack                               No Iterator Supported
// Queue                               No Iterator Supported          
// Priority-Queue                      No Iterator Supported


// - More on -
// https://www.geeksforgeeks.org/introduction-iterators-c/#:~:text=An%20iterator%20is%20an%20object,that%20particular%20location%20using%20them.



// -> Operations Allowed on Various Iterators -

// 1. Input Iterators -
// Access   =  ->
// Read     =  =*i
// Write    = 
// Iterate  =  ++
// Compare  =  ==, !=


// 2. Output Iterators -
// Access   = 
// Read     =  
// Write    =  *i=
// Iterate  =  ++
// Compare  =  


// 3. Forward Iterators -
// Access   =  ->
// Read     =  =*i
// Write    =  *i=
// Iterate  =  ++
// Compare  =  ==, !=


// 4. Bidirectional Iterators -
// Access   = 
// Read     =  =*i
// Write    =  *i=
// Iterate  =  ++, --
// Compare  =  ==, !=


// 5. Random-Access Iterators -
// Access   =  ->
// Read     =  =*i
// Write    =  *i=
// Iterate  =  ++
// Compare  =  ==, !=, +=, -==, +, -

// - Note:
// - In Iterators, i++ and i = i+1 works differently.
// - i++ means next iterator value
// - i= i+1 means iterator address value + 1 which will result in incrementing iterator address and will not get the next iterator value. So this i=i+1 will not work on non-continuous DS in STL library.


// ------------------------------------------------------------------------------------------------------
// => Iterator in Vectors -

// If we use Iterators in Vector(v) then -
// 1. Syntax for Declaring an Iterator in Vector is -> vector<int>::iterator it;
// 2. v.begin() will points to the first element address of the vector in the memory.
// 3. v.end() will points to the next to last element address of the vector in the memory.
// 4. So just like pointers, we can use dereference operator(*) to get the values of a iterators.
// 5. Can use access operator inside vector iterators.