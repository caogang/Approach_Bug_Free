#include <iostream>
#include <cstring>

using namespace std;

bool isUniqueChars(string word) {
  if (word.length() > 256) {
    return false;
  }

  bool table[256];
  for (int i = 0; i < word.length(); i++) {
    if (table[word[i]]) {
      return false;
    }
    table[word[i]] = true;
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
