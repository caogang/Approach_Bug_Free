#include <iostream>
#include <cstring>

using namespace std;

bool isUniqueChars(string str) {
  if (str.length() > 256) {
    return false;
  }

  bool table[256];

  for (int i = 0; i < str.length(); i++) {
    if (table[str[i]]) {
      return false;
    }
    table[str[i]] = true;
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
