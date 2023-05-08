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
// 2. We can use "LL" as suffix for the long long int and "L" for the long int
// when defining the variables.
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

// Note: If we want to add a charachter to the back of the string. Then there
// are two methods -
// 1. string.push_back();
// 2. string concatination. (str1 + str2)

// But which one is better. So string.push_back() takes O(1) time to push into
// the string. Whereas string concatination first creates a new string in the
// memory add str1 to it and then str2 to it and then store the the resultant
// and this take O(size_of_string) amount of time.

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
// 1. If we are defining an array locally, then we can define it in a size of
// ~10^5. It is because when we declare any variable locally it get stored in
// the Memory Segment of the Stack Memory(limit size of 8MB) which has a limited
// amount of memory. int main() {
//   int n = 1e7;
//   int a[n];

//   a[n - 1] = 7;
//   cout << a[n - 1];
// }
// It will throw a segmentation fault as we have defined the size of array is
// 10^7.

// 2. If we are defining an array globally, then we can define it in a size of
// ~10^7. It is because when we declare any variable globally it gets stored in
// the Data Segment of the Heap Memory which usually dont have any particular
// limit on how much it can store. const int n = 1e7; int a[n];

// int main() {
//   a[n - 1] = 7;
//   cout << a[n - 1];
// }
// It won't throw any error and will run.

// 3. The size of array defined in the global scope should be a constant.

// -------------------------------------------------------------------------------------
// - Common Online Judge Verdicts -

// 1. Runtime Error (RE)
// 2. Memory Limit Exceeded (MLE)
// 3. Time Limit Exceeded (TLE)
// 4. TLE and RE in Recursions
// 5. Compilation Error (CE)

// ------------------------------------------------------------------------------------------
// - No of Operations allowed in online judge platforms -

// - 10^7 - 10^8 in 1sec (as time limit for these platform is 1sec only to
// execute)

// Note:
// 1. The 1sec time for these online judge platform is for execution time and
// compilation time is included in this 1sec.
// -> Operations - Time Taken
//    10^7           1sec
//    10^8           10sec
//    10^9           100sec ~ 1.5min
//    10^10          1000sec ~ 15min
//    10^11          100000sec ~ 150min ~ 2.5hr

// 2. The value of is N < 10^5.
// 3. If value of N is 10^5 allowed, then O(N^2) time complexity is not allowed
// because N^2 mean 10^5 * 10^5 = 10^10, which is greater than the number of
// operation allowed per second which is 10^7 operation.
// 4. 1 < LogN < N < NLogN < N^2 < 2^N <3^N and so on... -> Complexity from less
// to more

// 5. If Constraints are:
//    1 <= T <= 100000
//    1 <= N <= 100000
//    1 <= a[i] <= 1000
// for below code -
// int main() {
//   int t; // testcases
//   cin >> t;

//   while (t--) {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int i = 0; i < n++ i) {
//       int x;
//       cin >> x;
//       sum += x;
//     }
//     cout << sum << endl;
//   }
// }

// Then, its time complexity will be -
// O(T*N) ~ O(N^N) ~ O(N^2) which is 10^5 * 10^5 = 10^10
// which means the above code will throw a TLE because it won't run in 1sec as
// 10^10 is greater than 10^7 operations.

// But if below Constraints are given, then the same code will execute in 10^7
// operation which means it will execute in 1sec time limit and don't throw the
// error of TLE.
//    1 <= T <= 100000
//    1 <= N <= 100000
//    1 <= a[i] <= 1000
// Sum of N over all Test cases is < 10^7
// for above code.

// And it is because now the sum for every test case and N will be less than
// 10^7 operation. So, TC will total no. of test case and N which is 10^7 ~
// O(T) ~ O(N)

// Explaination -
// A test is a single file that your program runs on and must answer within the
// time limit. Often a test is divided into multiple test cases, and your
// program is still required to answer the entire file in the time limit. So it
// must answer all test cases of a single file within the time limit.

// For example, let's say that n is at most 105. And let's say you can answer
// one test case in O(n) time.

// Without a sum guarantee, the worst case is that every test case has n=105,
// which will make your solution TLE if the number of test cases is a decent
// size. And if n is describing the length of an array, you don't even have
// enough time to read the input.

// One solution the authors might do is lower the constraint on n for each test
// case just enough so that a slower solution would still fail. This is
// sometimes done, but it can be a problem when the slow solution isn't that
// much slower, and you really need a big test case to distinguish them.

// Let's say instead the statement says that the sum of n over all test cases is
// at most 105. Now, the O(n)  solution will pass, because the total time is
// n1+⋯+nt≤10^5 where ni is the value of n in the i-th test case of the file.
// This will also give the author more flexibility to have some tests with a few
// very large test cases and other tests with a lot of small test cases. And you
// as the contestant can stop thinking about test cases as long as you have this
// guarantee about the sum.

// -----------------------------------------------------------------------------------------
// -  Modular Arithmetic -

// - Formulaes -
// 1. (a + b) % M = ((a % M) + (b % M) % M)
// 2. (a * b) % M = ((a % M) * (b % M) % M)
// 3. (a - b) % M = (((a % M) - (b % M) + M) % M)
// 4. (a / b) % M = (((a % M) * ((b^(-1)) % M) % M) % M)

// - Print the answer in Modular Arithmetic (M = 10 ^ 9 + 7) and Why ?
// - Suppose, we have to find the factorial of 50, But the number of factorial
// 50 will be so big that we can not store the result even in "long long" data
// type. And After some point it cannot even be calculated. That's why modular
// arithmetic properties are used so that we can find the result. Like M is
// given 47, then when we do Fact  = (Fact * number) % M, then the number that
// is stored in "Fact" will always be less than 47. And that is why modulo is
// used in these cases.
// - M => 10 ^ 9 + 7 value is choosen because,
//    a. This is a prime number is very close to the max value of int range. And
//    final answers can be stored in int itself. b. MMI(Multiplicative Inverse)
//    -> This cannot be calculated for any number. But it can be calculated
//    within a range of 1 to any prime number and since M is a prime number we
//    can caluclate the MMI within this big range.