string convert(string s, int numRows) {   
	string ret = "";
	int len = s.length();
	if (numRows < 2) {
		return s;
	}
	for (int i = 0; i < numRows; i++) {
		for (int j = i; j < len; j+=(2*(numRows - 1))) {
			ret += s[j];
			if (i > 0 && i < (numRows - 1) && (j + 2*(numRows - 1) - 2*i) < len) {
				ret += s[j + 2*(numRows - 1) - 2*i];
			}
		}
	}
	return ret;
}  