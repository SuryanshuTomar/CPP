// ---------------------------------------------------------------------------------------
// =>. Numbers -
//    a. Range of int -> -10^9 - 10^9
//    b. Range of long int -> -10^12 - 10^12
//       (not used often as its size depend on os architecture)
//    c. Range of long long int -> -10^18 - 10^18
//    d. Range of float is 1.5*10^-45 to 3.4*10^38 and the precision of the
//    float values is 7 digits. d. Range of double is 1.7E-308 to 1.7E+308.

// Note:
// 1. For storing number that are larger than the range of long long int we use
// strings and we dont use double and float because of precision errors. These
// float and double will have pricsion error if we calculate larger numbers
// using them.
// 2. We can use "LL" as suffix for the long long int and "L" for the long int.
// 3. We can print the fixed part of float and double using the "fixed" keyword
// in the print statement. eg - cout << fixed << 100.23 << endl; -> 100
// 4. We can also set till how many pricision digits we want to print the float
// and double numbers. eg - cout << setpricision(2) << 100.2343234 << endl; ->
// 100.23

// ---------------------------------------------------------------------------------------
// => Strings ->

// 1. cin takes input by ignoring the spaces and new lines between various
// inputs. So, we cannot take input that has spaces between them using the cin.
// In order to take input with spaces we have to use getline() that the string
// stl provides (#include <string>). eg -
//    int main() {
//       string name{};
//       cout << "Enter your name : "; -> "Alex Mercer"
//       getline(cin, name);
//       cout << "Your name is : " << name << endl; -> Your name is : Alex
//       Mercer
//    }

// 2. But there is one thing we need to be aware of while using the cin and
// getline together. Suppose we need to take string input the number of times
// user has entered a number. So, we can write the code as - int main() {
//   int t{};
//   cin >> t;

//   while (t--) {
//     string s{};
//     getline(cin, s);
//     cout << s << endl;
//   }
// }

// Input -
// 3
// abc def
// ghi jkl
// mno pqr

// output -
// abc def
// ghi jkl

// Note: It won't take the third line as input because, when we took the input
// for testcase t, the cursor for input was before 3 and then after input was
// enter the cursor was after the 3. Now, we know that getline() won't ignore
// the spaces and new line and after 3 a new line is there which it took as the
// first input and not the next line input. And that is why the three input for
// the getline were - "\n", "abc def" and "ghi jkl". So, In order to ignore the
// new line after taking the input we have to use cin.ignore() method. So, our
// new and correct code will be - int main() {
//   int t{};
//   cin >> t;
//   cin.ignore();

//   while (t--) {
//     string s{};
//     getline(cin, s);
//     cout << s << endl;
//   }
// }

// Note: If we want to add a charachter to the back of the string. Then there are two methods -
// 1. string.push_back();
// 2. string concatination. (str1 + str2)

// But which one is better. So string.push_back() takes O(1) time to push into the string. Whereas string concatination first creates a new string in the memory add str1 to it and then str2 to it and then store the the resultant and this take O(size_of_string) amount of time. 

// ---------------------------------------------------------------------------------------
// => Arrays -

// -> Taking input for 2D-Array - 
// int main() {
//   int rows{}, cols{};
//   cin >> rows >> cols;

//   int arr[rows][cols];

//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       cin >> arr[i][j];
//     }
//   }

//   cout << "Entered Array is : " << endl;

//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// -> Size of Array we can define - 
// 1. If we are defining an array locally, then we can define it in a size of ~10^5. It is because when we declare any variable locally it get stored in the Memory Segment of the Stack Memory(limit size of 8MB) which has a limited amount of memory.
// int main() {
//   int n = 1e7;
//   int a[n];

//   a[n - 1] = 7;
//   cout << a[n - 1];
// }
// It will throw a segmentation fault as we have defined the size of array is 10^7.

// 2. If we are defining an array globally, then we can define it in a size of ~10^7. It is because when we declare any variable globally it gets stored in the Data Segment of the Heap Memory which usually dont have any particular limit on how much it can store.
// const int n = 1e7;
// int a[n];

// int main() {
//   a[n - 1] = 7;
//   cout << a[n - 1];
// }
// It won't throw any error and will run.

// 3. The size of array defined in the global scope should be a constant.
