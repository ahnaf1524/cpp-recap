#include<bits/stdc++.h> 
#define endl '\n'       
using namespace std;

int main() {
  ios::sync_with_stdio(false); 
  cin.tie(nullptr);            

  // ---------------------------------
  //        CONDITIONAL STATEMENTS
  // ---------------------------------

  // Comparison operators
  // int a = 2, b = 3;
  // cout << (a == b) << endl;        // false (0)
  // cout << (a != b) << endl;        // true (1)
  // cout << boolalpha << (a == b) << endl; // prints "false" instead of 0

  // Logical operators (&& means AND, || means OR)
  // int a = 12, b = 3, c = 4;
  // cout << ((b > a) && (b > c));    // false (0) because b is not > a
  // cout << ((b > a) || (b > c));    // true (1) because b > c is true

  // ---------------------------------
  //         IF-ELSE CONDITIONS
  // ---------------------------------

  // Used to control decision-making in the program
  // int n; cin >> n;

  // Check if a number is even or not
  // if(n % 2 == 0) cout << "YES" << endl;
  // else cout << "NO" << endl;

  // Use else-if for multiple checks
  // if(n % 2 == 0) cout << "YES" << endl;
  // else if(n % 3 == 0) cout << "Divisible by 3" << endl;
  // else cout << "NO" << endl;

  // ---------------------------------
  //            SCOPES
  // ---------------------------------

  // int n; cin >> n;

  // Variables declared inside a block `{}` only exist inside that block
  // if(n % 2 == 0) {
  //   int x = 2;
  // }
  // cout << x << endl; // ❌ Error! x is not accessible here

  // Example of new scope
  // {
  //   int x = 45;
  //   cout << x << endl; // ✅ prints 45
  // }

  // Variable with same name can be declared in a different scope
  // int x = 100;
  // cout << x << endl; // prints 100

  // Global variables are declared outside all functions and accessible from anywhere

  // ---------------------------------
  //              LOOPS
  // ---------------------------------

  // Loops are used to repeat actions

  // -------- while loop --------
  // int i = 1;
  // while(i <= 10) {
  //   cout << i << endl;
  //   ++i; // increase i
  // }

  // -------- for loop --------
  // General structure: for(initialization; condition; update)
  // for(int i = 1; i <= 10; ++i) {
  //   cout << i << endl;
  // }

  // for loop does not affect global `i`
  // int i = 1;
  // for(int i = 1; i <= 10; ++i) {
  //   cout << i << endl;
  // }
  // cout << "Global i: " << i << endl; // Global i is still 1

  // Initialization can be done outside the for loop
  // int i = 1;
  // for(; i <= 10; ++i) {
  //   cout << i << endl;
  // }

  // All parts of for loop are optional
  // for(int i = 1; i <= 10; cout << i++ << endl); // prints 1 to 10

  // -------- NESTED LOOPS --------
  // Loop inside another loop - commonly used for patterns

  int it; cin >> it; // Take number of rows for the triangle pattern

  for(int i = 1; i <= it; ++i) {       // Outer loop controls the number of rows
    for(int j = 1; j <= i; ++j) {      // Inner loop prints stars in each row
      cout << "*";
    }
    cout << endl;                      // Go to next line after each row
  }

  return 0;
}
