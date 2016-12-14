string longestPalindrome(string s) {
	int len = s.length();
	if (len <= 0) {
		return "";
	}
	string str = "";
	str += '@';
	for (int i = 0; i < len; i++) {
		str += '#';
		str += s[i];
	}
	str += '#';
	str += '$';
	int r[2*len + 3];
	int max_mid = 0, max_r = 0;// int p = 0, p_r = 0;
	for (int i = 1; i < (2*len + 2); i++) {
		if (i < p_r) {
			r[i] = (p_r - i) > r[2*p - i] ? r[2*p - i] : (p_r - i);
		}
		else {
			r[i] = 1;
		}
		while (s[i - r[i]] == s[i + r[i]]) {
			r[i]++;
		}
		if (i + r[i] > p_r) {
			p_r = i + r[i];
			p = i;
		}
		if (r[i] > max_r) {
			max_mid = i;
			max_r = r[i];
		}
	}
	return s.substr((max_mid - max_r) / 2, max_r - 1);
}