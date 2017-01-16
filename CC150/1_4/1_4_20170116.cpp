#include <iostream>

using namespace std;
#define MAX_BUFFER 1024

void replaceSpaces(char* str, int length) {
  int spaceCounts = 0, i = 0, newLen = 0;

  for (i = 0; i < length; i++) {
    if (str[i] == ' ') {
      spaceCounts++;
    }
  }

  newLen = length + 2*spaceCounts;
  str[newLen] = '\0';

  for (i = length - 1; i >= 0; i--) {
    if (str[i] == ' ') {
      str[newLen - 1] = '0';
      str[newLen - 2] = '2';
      str[newLen - 3] = '%';
      newLen -= 3;
    }
    else {
      str[newLen - 1] = str[i];
      newLen -= 1;
    }
  }
}

int main(void) {
  char buffer[MAX_BUFFER];
  cin.getline(buffer, MAX_BUFFER - 1);
  cout << "源字符串：" << buffer << endl;
  replaceSpaces(buffer, strlen(buffer));
  cout << "替换之后的字符串" << buffer << endl;

  return 0;
}
