#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 🔤 Declare and initialize strings
  string s1 = "hello";
  string s2("world");
  string s3 = s1 + " " + s2; // join strings
  cout << "Combined: " << s3 << endl;

  // 📏 Length of string
  cout << "Length: " << s3.size() << endl;

  // 🔄 Iterate characters in string
  cout << "Characters: ";
  for(char ch : s3) cout << ch << ' ';
  cout << endl;

  // 🚪 First and last character
  cout << "First: " << s3.front() << ", Last: " << s3.back() << endl;

  // 📦 Add or remove from end
  s3.push_back('!');
  cout << "After push_back: " << s3 << endl;
  s3.pop_back();
  cout << "After pop_back: " << s3 << endl;

  // 🎯 Access character by index
  cout << "s3[1]: " << s3[1] << endl;

  // ✂️ Substring
  cout << "Substring from index 2, length 4: " << s3.substr(2, 4) << endl;

  // 🔍 Find substring
  int pos = s3.find("world");
  if(pos != string::npos)
    cout << "'world' found at index: " << pos << endl;

  // 🔧 Replace part of string
  s3.replace(6, 5, "universe");
  cout << "After replace: " << s3 << endl;

  // 🧽 Erase part of string
  s3.erase(6, 8); // remove "universe"
  cout << "After erase: " << s3 << endl;

  // ➕ Insert in the middle
  s3.insert(6, "planet");
  cout << "After insert: " << s3 << endl;

  // 🔁 Reverse string
  reverse(s3.begin(), s3.end());
  cout << "Reversed: " << s3 << endl;

  // 🧠 Check if palindrome
  string test = "madam";
  string rev = test;
  reverse(rev.begin(), rev.end());
  cout << "Is '" << test << "' a palindrome? " << (test == rev ? "Yes" : "No") << endl;

  // 🧮 Count frequency of characters (only lowercase a-z)
  string freqStr = "aabcccddde";
  int freq[26] = {0};
  for(char ch : freqStr) freq[ch - 'a']++;
  cout << "Character frequencies:\n";
  for(int i = 0; i < 26; ++i) {
    if(freq[i] > 0)
      cout << char(i + 'a') << " : " << freq[i] << endl;
  }

  // 🔠 Sort string alphabetically
  sort(freqStr.begin(), freqStr.end());
  cout << "Sorted string: " << freqStr << endl;

  // 🔡 Remove duplicate characters (after sorting)
  string uniq = freqStr;
  uniq.erase(unique(uniq.begin(), uniq.end()), uniq.end());
  cout << "Unique characters: " << uniq << endl;

  // 🔄 Convert between int and string
  int num = 12345;
  string numStr = to_string(num);
  cout << "Int to string: " << numStr << endl;

  string strNum = "6789";
  int realNum = stoi(strNum);
  cout << "String to int: " << realNum << endl;

  // 📝 Take full line input with spaces
  cout << "Enter a sentence: ";
  string line;
  cin.ignore(); // clear buffer before getline
  getline(cin, line);
  cout << "You wrote: " << line << endl;

  return 0;
}
