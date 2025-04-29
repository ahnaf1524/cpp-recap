// O(n) and O(n^2) Example for beginners

#include<iostream>
using namespace std;

int main() {
	/*
	 Let's understand O(n) first with simple examples:

	 Suppose we want to take input of an array 4 times like below.
	 We are repeating the same loop 4 times, but each one runs 'n' times.

	 Total complexity: O(1) + O(1) + O(n) + O(n) + O(n) + O(n) = O(n)

	 Even if we do this many times (as long as it's not nested), it stays O(n)
	*/

	// Example:
	// int n;
	// cin >> n;
	// int arr[n];

	// for(int i = 0; i < n; ++i) cin >> arr[i];
	// for(int i = 0; i < n; ++i) cin >> arr[i];
	// for(int i = 0; i < n; ++i) cin >> arr[i];
	// for(int i = 0; i < n; ++i) cin >> arr[i];

	// So, as long as loops are side by side (not inside each other), it's still O(n)

	// ------------------------------------------

	// Now let's understand O(n^2) - which is dangerous for large n!

	int n; 
	cin >> n;  // taking input for number of rows/columns

	int cnt = 0;  // counter to check total number of iterations

	// Nested loop → this is where things change!
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << "* ";  // printing a star
			++cnt;         // counting how many times this line runs
		}
		cout << endl;  // new line after each row
	}

	cout << "Number of iterations: " << cnt << endl;

	/*
	Time Complexity Explanation:

	O(1) → for variables and input
	O(n^2) → nested loop: n * n times

	So, total = O(n^2)

	Let’s take an example:
	If n = 10^5 (100000),
	then total operations = 100000 * 100000 = 10^10

	This is TOO MUCH for online judges ❌
	10^10 operations can take 1000+ seconds! (way beyond time limit)

	So this kind of nested loop gets TLE (Time Limit Exceeded) for large n.

	Conclusion:
	✔ Use O(n) if constraints are big (like n <= 10^5)
	❌ Avoid O(n^2) if n can be large!
	*/

	return 0;
}
