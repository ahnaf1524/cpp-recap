/*
Problem:
You are given T test cases.
In each test case, an array of size N is given.
You have to print the sum of the array.

Constraints:
1 <= T <= 100000           // up to 1e5 test cases
1 <= N <= 100000           // each array can have up to 1e5 elements
1 <= a[i] <= 1000          // array element range is small
*/

// This line in the problem may confuse you:
// "Sum of N over all test cases is < 10^7"
// 👉 It means that if you add up all the N values from all T test cases, it will not exceed 10^7
// ✅ So the total number of inputs will be less than or equal to 10^7, which is acceptable in online judges.

#include <iostream>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int tc; 
	cin >> tc;  // number of test cases

	int cnt = 0;  // counter to count how many total elements we're reading

	while (tc--) {
		int n;
		cin >> n;  // size of the array for current test case

		int sum = 0;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;     // input array element
			sum += x;     // add to sum
			cnt++;        // keep track of how many elements total we have read
		}
		cout << sum << '\n';  // print the sum for this test case
	}

	/*
	Time Complexity Analysis:

	At first glance, it looks like:
	O(T * N) --> if T = 10^5 and N = 10^5 → too slow (10^10 operations ❌)

	But wait! Problem says:
	"Sum of all N over all test cases < 10^7"
	So even if T is 10^5, not every test case has N = 10^5

	Final complexity = O(cnt) = O(total number of inputs)
	And total inputs <= 10^7 ✅ (safe for online judges)
	*/

	return 0;
}
