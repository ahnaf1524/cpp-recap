#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  char a = 'a'; // char can only hold one character like 'a', 'b', etc.
  // char b = 'afsdf'; //  wrong! a char can't store multiple letters

  // Working with strings in C++

  // string str = "Hello World!"; // you can create a string like this
  // string str; cin >> str; // takes input (but stops at space)
  // cout << str << endl;

  // string str2 = "world";
  // string res = str + " " + str2; // join two strings with a space
  // cout << res << endl;

  // Comparing two strings
  // string s1 = "hello", s2 = "hello";
  // if(s1 == s2) {
  //   cout << "Equal" << endl;
  // }
  // else {
  //   cout << "NOT equal" << endl;
  // }

  // Accessing characters in a string
  // string str = "Hello";
  // cout << str[0] << endl; // shows 'H'
  // str[0] = 'B'; // you can change 'H' to 'B'
  // cout << str[3] << endl; // shows the 4th character

  // Get the size or length of a string
  // cout << "String Length : " << str.size() << endl;

  // Loop through each character of the string
  // for(int i = 0; i < str.size(); ++i)
  // {
  //     cout << "str[" << i << "] : " << str[i] << endl;
  // }

  // Taking input that includes spaces (like full sentences)
  // string s;
  // getline(cin, s); // takes a full line of input including spaces
  // cout << "Your Given input : " << s << endl;

  // ========== Now let's handle multiple lines of input ==========

  // Suppose you have to take input for multiple test cases (tc)
  int tc;
  cin >> tc; // first take the number of test cases

  cin.ignore(); // this line skips the leftover newline after cin >> tc
  // Without this, getline() will read an empty line first

  while(tc--) {
    string s;
    getline(cin, s); // take full line input (with spaces)
    cout << "# Case " << tc << " : " << s << endl; // print with case number
  }

  return 0;
}
