#include <iostream>
using namespace std;
typedef long long ll;

// First recap modular arithmetic formulas


/*
Why do we print the answer modulo 10^9 + 7 (which is 1000000007)?

In competitive programming, when we calculate large results such as factorials or combinations,
the numbers can become extremely large—too large to fit in standard data types like int or long long.

To prevent overflow (which would lead to incorrect results), we take the result "modulo" a number like 10^9 + 7.

This number (1000000007) is commonly used because:
- It is a large number, which ensures we retain most of the value's uniqueness.
- It is a prime number, which is helpful for many mathematical operations, especially modular inverse.

Modulo simply means taking the remainder when dividing by a number.
For example: 13 % 5 = 3 (13 divided by 5 leaves a remainder of 3)

By applying modulo, we keep the result within a safe and manageable range, avoiding overflow issues.
*/

// Problem: Given a number N, print its factorial.
// Constraints: 1 <= N <= 100

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	cout.tie(nullptr);

	int n;
	cin >> n;

	ll fact = 1;

	// Modulo value
	// In real competitive problems, this is often 1e9 + 7 (1000000007)
	// For demonstration, we use a smaller number
	int M = 47;

	// Compute factorial with modulo
	for (int i = 1; i <= n; ++i) {
		fact = (fact * i) % M;
		// This keeps the number small at every step and avoids overflow
	}

	cout << fact << endl;

	/*
	Important Notes:

	- If we do not apply modulo at each step, the result may overflow even if we use long long.
	  For example, 100! is too large to be stored in any built-in type.

	- Therefore, we apply modulo at each multiplication: fact = (fact * i) % M;

	- If a problem statement says "Print the answer modulo M", it indicates that the result
	  could be large, and we are expected to keep it within limits using modulo.

	- Although 1e9 + 7 (1000000007) is most common in contests, any number (like 47) can be used for practice.

	Example:
		Input: N = 5
		Factorial = 5 * 4 * 3 * 2 * 1 = 120
		With M = 47 => 120 % 47 = 26
		Output: 26
	*/

	return 0;
}


