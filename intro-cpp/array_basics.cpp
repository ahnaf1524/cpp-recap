#include <iostream>
using namespace std;

// Constant sizes for global and local arrays
const int MX = 1e7;        // Global array size limit (around 10^7)
const int MX_LOCAL = 1e5;  // Local array size limit (around 10^5)

// Global array (can hold up to MX elements)
// Global arrays are allowed to be large and are automatically initialized to 0
int A[MX];

int main() {

  // Example 1: Accessing outside of array bounds can cause segmentation fault
  /*
  int a[10];
  a[0] = 52;
  a[11] = 10; // Accessing out of bounds (index 11 is invalid for size 10)
  cout << a[11] << endl; // May crash or show garbage value
  */

  // Example 2: Variable size array input and sum calculation
  /*
  int n;
  cin >> n;           // Read size of array
  int a[n];           // Variable size array (allowed in some compilers like GCC)
  for(int i = 0; i < n; ++i) {
    cin >> a[i];      // Input array elements
  }
  int sum = 0;
  for(int i = 0; i < n; ++i) {
    sum += a[i];      // Calculate sum
  }
  cout << "Sum = " << sum << endl;
  */

  // Example 3: 2D array input and output
  /*
  int n, m;
  cin >> n >> m;
  int a[n][m];        // 2D array (variable size)

  // Input elements
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }

  // Output elements
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  */

  // Important Notes:
  // - Use global arrays when large size is needed (up to 10^7)
  // - Use local arrays for smaller sizes (up to 10^5)
  // - Do not declare very large arrays locally to avoid stack overflow
  // - Array elements are not initialized automatically in local arrays

  // Using global array safely
  A[MX - 1] = 25;
  cout << A[MX - 1] << endl;

  // Using local array safely
  int B[MX_LOCAL];
  B[MX_LOCAL - 1] = 10;
  cout << B[MX_LOCAL - 1] << endl;

  return 0;
}
