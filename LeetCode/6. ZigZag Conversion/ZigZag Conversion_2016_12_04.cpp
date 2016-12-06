string convert(string s, int numRows) {   
	int len = s.length();
	string ret = "";
	if (numRows < 2) {
		return s;
	}
	for (int i = 0; i < numRows; i++) {
		for (int j = i; j < len; j+=(2*numRows - 2)) {
			ret += s[j];
			if (j + 2*(numRows - 1 - i) < len) {
				ret += s[j + 2 * (numRows - 1 - i)];
			}
		}
	}
	return ret;
}  