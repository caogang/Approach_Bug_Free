#include<iostream>
#include<sstream>

using namespace std;

int countCompression(string str) {
  if (str.empty()) {
    return 0;
  }

  int count = 1;
  char last = str[0];
  int size = 0;

  for (int i = 1; i < str.length(); i++) {
    if (str[i] == last) {
      count++;
    }
    else {
      stringstream ss;
      ss << count;
      string tp = ss.str();
      size += (1 + tp.length());
      last = str[i];
      count = 1;
    }
  }

  stringstream ss;
  ss << count;
  string tp = ss.str();
  size += (1 + tp.length());

  return size;
}

int setArray(char *array, int index, char last, int count) {
  array[index++] = last;

  stringstream ss;
  ss << count;
  string tp = ss.str();

  for (int i = 0; i < tp.length(); i++) {
    array[index++] = tp[i];
  }

  return index;
}

string stringCompression(string str) {
  int size = countCompression(str);
  if (size >= str.length()) {
    return str;
  }

  char *array = new char[size];
  char last = str[0];
  int count = 1;
  int index = 0;

  for (int i = 1; i < str.length(); i++) {
    if (str[i] == last) {
      count++;
    }
    else {
      index = setArray(array, index, last, count);
      last = str[i];
      count = 1;
    }
  }

  setArray(array, index, last, count);
  string ret = string(array);
  delete[] array;

  return ret;
}

int main() {
  string input;
  cin >> input;
  string output = stringCompression(input);
  cout << output << endl;
  return 0;
}
