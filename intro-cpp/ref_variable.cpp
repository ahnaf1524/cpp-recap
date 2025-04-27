#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

// Global 2D array
// Global arrays can have large size
const int LIMIT = 1e3 + 10;
int A[LIMIT][LIMIT];

// -----------------------------
// Swap two numbers using a function
// Using pass by reference so the actual values change
// -----------------------------
void swap_mine(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

// -----------------------------
// Example of pass by value
// Pass by value means the function gets a copy of the variable
// So the original value doesn't change
// -----------------------------
// int increment(int n) {
//   return ++n;
// }

// -----------------------------
// Example of pass by reference
// Pass by reference means the function works with the real variable
// So the original value gets changed
// -----------------------------
// int increment(int &n) {
//   return ++n;
// }

// -----------------------------
// Change a string by reference
// -----------------------------
// void func(string &s) {
//   s = "running......";
// }

// -----------------------------
// Arrays are passed by reference by default
// Change an element of 1D array
// -----------------------------
// void func(int arr[]) {
//   arr[5] = 50;
// }

// -----------------------------
// 2D array with fixed second dimension
// -----------------------------
// void func(int arr[][20]) {
//   arr[0][0] = 60;
// }

// -----------------------------
// This function might not work in all compilers
// because using variable 'm' as second size is not always allowed
// That's why in contests, we always fix the array size using constants
// -----------------------------
void func(int n, int m, int arr[][m]) {
  arr[0][0] = 60;
}

// In contests, always:
// - Declare constant size based on constraints
// - Declare large arrays globally (above main)
// - This is common in CP but not good in real software projects

int main() {
  // Fast input/output (useful in contests)
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  // -----------------------------
  // Uncomment this to test pass by value and reference
  // -----------------------------
  /*
  int a = 7;
  cout << "Pass by value : " << increment(a) << endl;
  cout << "Now a = " << a << endl;

  cout << "Pass by reference : " << increment(a) << endl;
  cout << "Now a = " << a << endl;
  */

  // -----------------------------
  // Swapping two numbers
  // -----------------------------
  /*
  int a, b;
  cin >> a >> b;

  // Using our own function
  swap_mine(a, b);

  // Or you can use built-in swap(a, b);
  cout << "After swapping: " << a << " " << b << endl;
  */

  // -----------------------------
  // Pass string by reference
  // -----------------------------
  /*
  string str = "ahnaf";
  cout << "Before Function call: " << str << endl;
  func(str);
  cout << "After Function call: " << str << endl;
  */

  // -----------------------------
  // 1D array (passed by reference automatically)
  // -----------------------------
  /*
  int a[10];
  a[5] = 41;
  cout << "Before Function call a[5]: " << a[5] << endl;
  func(a);
  cout << "After Function call a[5]: " << a[5] << endl;
  */

  // -----------------------------
  // 2D array (also passed by reference)
  // -----------------------------
  int a[10][20];
  a[0][0] = 3;
  cout << "Before Function call a[0][0]: " << a[0][0] << endl;
  func(10, 20, a);
  cout << "After Function call a[0][0]: " << a[0][0] << endl;

  return 0;
}
