#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
// Approach 01
//  string s; cin >> s;
//  string rev;
//  for(int i = s.length() - 1; i >= 0; --i) {
//    rev.push_back(s[i]);
//  }
//  cout << rev << endl;
//  if(s == rev) cout << "Palindrome\n";
//  else cout << "Not Palindrome\n";


// Approach 02

  string str;
  getline(cin, str);
  int n = str.size();
  bool palindrome = false;


  for(int i = 0; i < n; ++i) {
    if(str[i] == str[n - i - 1]) {
      palindrome = true;
    }
    else {
      palindrome = false;
      break;
    }
  }
  if(palindrome) cout << "Palindrome" << endl;
  else cout << "Not Palindrome" << endl;
  return 0;
}
