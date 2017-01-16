#include <iostream>

using namespace std;

void reverse(char *str) {
  char *end = str;
  while(*end) {
    end++;
  }
  end--;
  char tp;
  while (str < end) {
    tp = *str;
    *str++ = *end;
    *end-- = tp;
  }
}

int main() {
  char str[50] = {'4', '3', '2', '1', 'B', 'A', 'a', 'b'};
  reverse(str);
  for (int i = 0; i < 8; i++) {
    cout << str[i];
  }
  cout << endl;
  return 0;
}
