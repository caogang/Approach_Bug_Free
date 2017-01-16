#include <iostream>
#include <cstring>

using namespace std;

bool isUniqueChars(string s) {
  if (s.length() > 256) {
    return false;
  }

  bool t[256];

  for (int i = 0; i < s.length(); i++) {
    if (t[s[i]]) {
      return false;
    }
    t[s[i]] = true;
  }
  return true;
}

int main () {
  string word;
  cin >> word;
  if (isUniqueChars(word)) {
    cout << "Unique" << endl;
  } else {
    cout << "Not Unique" << endl;
  }

  return 0;
}
