// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 24, 2025
// =============================================================
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

void solver() {
  // Solution
  int n; cin >> n;
  cout << n * (n + 1) / 2 << endl;
}

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // read testcases
  int tc;
  cin >> tc;
  while(tc--) {
    solver();
  }

  return 0;
}