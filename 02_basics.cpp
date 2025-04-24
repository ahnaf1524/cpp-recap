#include<bits/stdc++.h>
using namespace std; 

int main() {

  // ---------------- Basic Division ----------------
  // cout << 7 / 2 << endl;        // Integer division: 7 / 2 = 3
  // cout << 7 / 2.00 << endl;     // Floating-point division: 7 / 2.0 = 3.5

  // ---------------- ASCII & Characters ----------------
  // cout << (int)'c' << endl;     // ASCII value of 'c' → 99
  // cout << 'c' + 1 << endl;      // 99 + 1 = 100 (char + int = int)

  // ---------------- Data Type Precedence ----------------
  // Higher to lower capacity types:
  // 1. double
  // 2. float
  // 3. long long int
  // 4. int
  // 5. char

  // ---------------- Division with Mixed Types ----------------
  // int a = 3 / 2;                // 1 → integer division, then store to int
  // int a = 3 / 2.0;              // error/warning: double result stored in int
  // double a = 3 / 2;             // 3 / 2 = 1, then converted to double → 1.0
  // cout << a << endl;

  // ---------------- Operator Precedence ----------------
  // See operator precedence chart: https://www.tutorialspoint.com/Operators-Precedence-in-Cplusplus
  // *, /, % → all have same precedence and are left-to-right
  // So: 7 / 2 = 3 → then 3 * 3 = 9
  // cout << 7 / 2 * 3;

  // Try to guess this one before running!
  // cout << 3 * 7 / 2 << endl;    // 3*7 = 21, 21 / 2 = 10 (integer division)

  // ---------------- Integer Overflow ----------------
  // int → stores up to around ±10^9
  // long int → ±10^12
  // long long int → ±10^18

  // Overflow example:
  // int a = 100000, b = 100000, c = a * b; // Wrong → a*b = 10^10 → overflow
  // cout << c << endl;

  // Check max value of int
  // int mx = INT_MAX;
  // cout << mx << endl;          // Max int value
  // cout << ++mx << endl;        // Overflow → goes to negative

  // a * b done in int range first, so assigning to long int still gives overflow
  // int a = 100000, b = 100000;
  // long int c = a * b;          // Wrong

  // Correct way:
  // long long int c = a * 1LL * b; // 1LL makes a long long → rest converted automatically

  // ---------------- Why not use double in contests? ----------------
  double x = 100000;
  double y = 100000;
  double c = x * y;

  // cout << c << endl;                  // Output in scientific form (e.g., 1e+10)
  // cout << fixed << c << endl;        // Shows full number with decimals
  // cout << fixed << setprecision(0) << c << endl; // No decimals

  c = 1e24;  // 10^24

  // Don't use float/double in competitive programming if possible.
  // They store large numbers but not exactly → can cause precision errors.
  // Use int, long long int if answer is exact.
  // cout << fixed << c << endl;

  return 0;
}
