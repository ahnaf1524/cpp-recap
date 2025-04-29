#include <bits/stdc++.h>
using namespace std;

int main() {

	// After completing this lecture and understanding this code,
	// you will learn how to estimate the approximate time an algorithm needs to run.
	// This is called analyzing the "time complexity" of an algorithm.

	// Let's begin with simple operations:

	// Each line below is a constant-time operation.
	// "Constant-time" means the operation always takes the same amount of time to run,
	// no matter how big or small the input is.

	int x;       // Declaration of a variable (constant time)
	int sum = 0; // Initialization of a variable (constant time)
	sum = x + x; // Simple addition operation (constant time)

	// So, these three lines are considered as three constant-time operations. O(3)

	int n;
	cin >> n;    // Taking input from the user (constant time)

	// Until this point, we have performed about 5 constant-time operations.
	// (3 lines above + 1 line for declaring 'n' + 1 line for input = 5 operations)

	// Now, let's look at the 'for' loop:

	// The for loop below runs 'n' times based on the value entered by the user.
	// Example: if n = 5, the loop runs 5 times; if n = 1000, it runs 1000 times.

	// Inside the loop body:
	// - Declare an integer 'y' (constant time)
	// - Assign the value 5 to 'y' (constant time)
	// - Increment 'y' by 1 (constant time)
	// So, each iteration (each run of the loop) takes 3 constant-time operations.

	// Therefore, the time complexity of the loop alone is:
	// → O(3) for one iteration
	// → O(3n) for 'n' iterations

	for(int i = 0; i < n; ++i) {
		int y;
		y = 5;
		y++;
	}

	return 0;
}

/*
Detailed Analysis and Final Conclusion:

1. Before the loop:
   - 5 constant-time operations → Time complexity is O(5)

2. Inside the loop:
   - 3 constant-time operations per iteration
   - 'n' iterations → Total loop complexity = O(3 * n)

3. Total complexity of the program:
   - O(5) + O(3n)

4. Important Time Complexity Rules:
   - Constants are ignored when expressing time complexity.
     Why? Because as 'n' grows very large (say 1 million), constants like 5 or 3 become insignificant.
   
   - Therefore, O(5) is considered O(1) (constant time), and O(3n) is considered O(n).

   - Final Time Complexity = O(n)

Notes for Better Understanding:

- If an algorithm has O(n) + O(n) + O(n), it is still O(n).
  (We add them, but the constant 3 is ignored, so it remains O(n)).

- If an algorithm has O(k * n), where 'k' is a constant (like 1, 2, 5, etc.), and 'k' is much smaller compared to 'n',
  we ignore 'k' and still say it is O(n).

- Time complexities like O(1), O(2), O(3), etc., are all considered constant time and are simply written as O(1).
  (Because they don't depend on the size of the input.)

Summary of Important Points:

- Constant-time code → O(1)
- Loop with 'n' iterations → O(n)
- Nested loops or multiplying constants need careful analysis, but constants are ignored at the end.
- Always focus on the part of the algorithm that grows fastest with input size 'n'!

*/

