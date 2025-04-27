#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  // ✅ Take a very large number as input using string
  // We use string instead of int or long long because the number might be too big to fit in normal datatypes
  string s;
  cin >> s;

  // Example input: 564756446146546516131541164713641474654

  // 🧠 You can access any digit by index like this:
  // char last_char = s[s.size() - 1]; // last character of the string
  // cout << "Last character : " << last_char << endl;

  // 🧠 Every character digit (like '5') has an ASCII value.
  // If you want to get the integer value, subtract it from character '0'
  // For example: '5' - '0' = 53 - 48 = 5

  // ✅ Get the last digit as integer
  int last_digit = s[s.size() - 1] - '0';

  // ✅ You can now do arithmetic with this digit
  cout << "Last digit is " << last_digit + 5 << endl;

  return 0;
}
