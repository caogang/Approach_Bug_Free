#include <iostream>

using namespace std;
#define MAX_BUFFER 1024

void replaceSpaces(char* str, int length) {
  int spaceCounts = 0, newLength = -1, i = -1;

  for (i = 0; i < length; i++) {
    if (str[i] == ' ') {
      spaceCounts++;
    }
  }

  newLength = length + 2*spaceCounts;
  str[newLength] = '\0';

  for (i = length - 1; i >= 0; i--) {
    if (str[i] == ' ') {
      str[newLength - 1] = '0';
      str[newLength - 2] = '2';
      str[newLength - 3] = '%';
      newLength -= 3;
    }
    else {
      str[newLength - 1] = str[i];
      newLength -= 1;
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
