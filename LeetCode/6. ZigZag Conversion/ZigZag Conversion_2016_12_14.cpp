string convert(string s, int numRows) {   
	int len = s.length();
	string ret = "";
	if (numRows <= 1) {
		ret = s;
		return ret;
	}
	
	for (int i = 0; i < numRows; i++) {
		for (int j = i; j < len; j+=(2*(numRows-1))) {
			ret += s[j];
			if (i > 0 && i < (numRows - 1) && j+2*(numRows - i - 1) < len) {
				ret += s[j+2*(numRows - i - 1)];
			}
		}
	}
	return ret;
}  