#include <iostream>

using namespace std;

bool permutation(string s, string p) {
  if (s.length() != p.length()) {
    return false;
  }

  int counts[256];

  for (int i = 0; i < s.length(); i++) {
    counts[s[i]]++;
  }

  for (int i = 0; i < p.length(); i++) {
    if (counts[p[i]]-- == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  string s, p;
  cout << "Please input two strings(Format:xxx xxx):";
  cin >> s >> p;

  if (permutation(s, p)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
