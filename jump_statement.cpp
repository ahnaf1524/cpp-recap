#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long int li;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // ---------------- BREAK ----------------
  cout << "C++: Demonstrating break" << endl;
  for (int i = 1; i <= 10; ++i) {
    if (i == 5) {
      cout << "Breaking the loop at i = " << i << endl;
      break; // exits the loop when i == 5
    }
    cout << "i = " << i << endl;
  }

  // ---------------- CONTINUE ----------------
  cout << "C++: Demonstrating continue" << endl;
  for (int i = 1; i <= 5; ++i) {
    if (i == 3) {
      cout << "Skipping i = " << i << endl;
      continue; // skips the current iteration
    }
    cout << "i = " << i << endl;
  }

  return 0;
}
