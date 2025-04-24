// Instead of including multiple headers like <iostream> and <cmath>, we use this one line
// It includes almost all standard C++ libraries (shortcut for competitive programming)
#include<bits/stdc++.h>
using namespace std;

int main() {

  // Some examples are commented out below - showing how C++ basics work:

  // Printing to the screen
  // cout<<"Hello World!" << " Recap " << "!" <<endl;

  // Square root of a number using sqrt()
  // cout<<sqrt(4)<<endl;

  // Declaring and adding two numbers
  // int a = 4;
  // int b = 6;
  // int sum = a + b;

  // Mixing different data types: int and char
  // int a = 4;
  // char c = 'a';
  // cout<<c << " " << a <<endl;

  // Integer variable and assigning a float to it
  // int a = 3; 
  // cout<< a << endl;

  // Assigning decimal to int will just cut off the decimal part
  // a = 36.4;
  // cout << a << endl; // Output will be just 36, not 36.4

  // Boolean values in C++
  // bool check = 0; // false → 0, any non-zero value (positive/negative) → true

  // Modulus (%) gives remainder of division
  // cout << 2 * 3 << endl;
  // cout << 20 % 7 << endl; // Output: 6

  // Post-increment vs pre-increment
  // int a = 56;
  // cout << a++ << endl; // Prints current value then increases
  // cout << ++a << endl; // Increases first then prints

  // Working with characters
  // char c = 'a';
  // cout << (int) c << endl; // Type casting to find ASCII of character
  // char a  = 'o';
  // cout << "Ascii value of  char 'o' is " << (int) a << endl;

  // Finding the difference between ASCII values of two characters
  // cout << "Difference : " << a - c << endl; // o - a = 111 - 97 = 14

  // Taking mixed type input
  // int a; double pi; char ch;  
  // cin >> a >> pi >> ch;
  // cout << a  << " " << pi  << " " << ch << endl;

  // Showing ASCII value of input char
  // cout << a  << " " << pi  << " " << (int)ch << endl;

  // Type casting int to char
  // cout<<(char)a<<endl;
  // cout<<(char)a<< '\n';

  // Example input and output with a char and an int
  int a, b, c; // Declaring integer variables
  char d; // Declaring a character variable

  // Taking a character and an integer input from user
  cin >> d >> a;

  // Showing what was input
  cout << d << " " << a << endl;

// Note: cin >> d >> a;
// If d is a char, it takes only 1 character (e.g., from input "12 2345", d = '1')
// Then a reads the next integer (a = 2)
// To read full "12", use string or int for d

  return 0;
}
