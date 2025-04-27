#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc; cin >> tc;
  cin.ignore(); // To ignore newline after tc

  while(tc--) {
    string s;
    getline(cin, s);

    string rev;
    for(int i = s.size() - 1; i >= 0; --i) {
      rev.push_back(s[i]);
    }

    cout << rev << endl;
  }

  return 0;
}
