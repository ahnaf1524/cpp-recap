#include <iostream>
using namespace std;
int main() {

	// ------------------- Example 1 -------------------

	// This example helps us understand O(log(n)) complexity.
	// Let's say we divide a number by 2 again and again until it becomes 0.

	// int n;
	// cin >> n;
	// int cnt = 0;
	// while(n > 0) {
	// 	n /= 2;   // divide n by 2 each time
	// 	cnt++;    // count how many times we divide
	// }

	// Time Complexity Breakdown:
	// O(1) --> for int n and int cnt
	// O(log(n)) --> for the while loop
	// So total = O(log(n)), which is much faster than O(n)


	// ------------------- Example 2 -------------------

	int n; 
	cin >> n;
	int cnt = 0;

	// Let's understand this nested loop:
	for(int i = 0; i < n; ++i) {         // runs n times
		for(int j = 0; j < i; ++j) {     // runs i times for each i
			cout << "# ";               // prints # multiple times
			cnt++;                      // counting how many times loop runs
		}
		cout << cnt << endl;            // print total count so far
	}

	// This nested loop has O(n^2) complexity. Why?
	// First loop runs n times.
	// Second loop runs 1 + 2 + 3 + ... + (n-1) times.
	// That adds up to (n * (n-1)) / 2 which is O(n^2).


	return 0;
}


// ------------------- Complexity Explanation -------------------

/*
▶ What is O(log(n))? (From Example 1)

- Imagine you have a number, say 8.
- Now keep dividing it by 2 until it becomes 0.

  8 / 2 = 4
  4 / 2 = 2
  2 / 2 = 1
  1 / 2 = 0 (done)

- We only needed 4 steps, not 8 steps.
- So, this is called logarithmic time, written as O(log(n)).

- In general:
  If we divide n by 2 until we hit 0, that’s O(log(n)).
  If 2^a = n, then a = log(n).

▶ Why O(log(n)) is better?

- Because it takes way fewer steps than O(n)
- Example:
  n = 100000 (10^5)
  O(n) = 100000 steps
  O(log(n)) ≈ 17 steps only!

▶ So coders love to make algorithms that work in O(log(n)) time.

▶ Now, let's talk about Example 2 (Nested Loop):

- Outer loop runs n times.
- Inner loop runs like:
    0 + 1 + 2 + 3 + ... + (n-1)
    Which equals n*(n-1)/2

- So, total steps = O(n^2)
- If n = 1000, then total = 1,000,000 steps (which is okay)
- But if n = 100000, then total = 10,000,000,000 steps (TLE!)

▶ Always check the problem constraints:
  - If n is very big (like 10^18), avoid O(n)
  - Use O(log(n)) or even better (like O(1))

▶ In online contests:
  - Around 10^7 to 10^8 operations run in 1 second.
  - So always estimate your time complexity before coding.

Hope this made it easier to understand :)
*/



// Visualizations
// 1. https://drive.google.com/file/d/13OkbvRM7k8pI9RZVPcUe3lCDVdXXQ_NL/view?usp=drive_link
// 2. https://drive.google.com/file/d/1zskiAbLbK-NTWQ6IS4vDhdwjL04JI8mK/view?usp=drive_link
// 3. https://drive.google.com/file/d/1A_SjLxOdhOBpfZo8REmrBwXe7PoV1tD8/view?usp=drive_link
// 4. https://drive.google.com/file/d/1XSFmXe4cLsB4cq_qCeQ4ZIum8BUg8gjC/view?usp=drive_link 