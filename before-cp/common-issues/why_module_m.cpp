#include <iostream>
using namespace std;
typedef long long ll;

/*
🔍 Why do we print the answer modulo 10^9 + 7 (which is 1000000007)?

✅ In competitive programming, when we calculate big results like factorials or combinations,
   the number can become extremely large—too big to fit in normal data types like int or long long.

✅ To avoid overflow (which gives wrong answers), we take the result "modulo" a number like 10^9 + 7.

✅ This number (1000000007) is very commonly used because:
   - It is a large number (so we don’t lose too much info by using modulo).
   - It is a **prime number**, which helps in many mathematical operations like modular inverse.

🧠 Modulo just means taking the **remainder** when we divide by that number.
   For example: 13 % 5 = 3  (because 13 divided by 5 leaves a remainder of 3)

✅ This keeps our result small and prevents errors from overflow.
*/

// 🎯 Problem: Given a number N, print its factorial.
// 👉 Constraints: 1 <= N <= 100

int main() {
	ios::sync_with_stdio(false); // Speeds up input/output
	cin.tie(nullptr); // Disconnects cin from cout (faster input)
	cout.tie(nullptr); // Disconnects cout from cin (faster output)

	int n;
	cin >> n;

	ll fact = 1;

	// Let's set a modulo value
	// This can be 1e9 + 7 in real problems
	// But here we will use 47 to keep things simple
	int M = 47;

	// Calculate factorial using a loop
	for (int i = 1; i <= n; ++i) {
		// Multiply fact by i, and take modulo to keep number small
		fact = (fact * i) % M;

		// You can try this step-by-step on paper to understand better
	}

	// Finally, print the answer
	cout << fact << endl;

	/*
	💡 Important Notes:

	- Without using modulo inside the loop, the number can overflow even if we use long long.
	  For example, 100! is a HUGE number.

	- So we apply modulo at each step: fact = (fact * i) % M;

	- If a problem says "Print the answer modulo M", it means:
	  The result may be very big, so take modulo M to keep it safe and small.

	- The modulo value M is often 1e9 + 7 (1000000007) in contests.
	  But for practice, any small number like 47 is fine.

	🧪 Example:
		N = 5
		Factorial = 5 * 4 * 3 * 2 * 1 = 120
		With M = 47 => 120 % 47 = 26

		Output = 26 ✅
	*/

	return 0;
}
