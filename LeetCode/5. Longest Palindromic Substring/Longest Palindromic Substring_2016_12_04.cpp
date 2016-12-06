string longestPalindrome(string s) {
	string str = "";
	string ret = "";
	int p = 0, pr = 0; int mid = 0, mid_r = 0;
	str += '@';
	int len = s.length();
	for (int i = 0; i < len; i++) {
		str += '#';
		str += s[i];
	}
	str += '#';
	str += '$';
	int r[2*len + 2];
	for (int i = 1; i < (2*len + 2); i++) {
		if (i >= pr) {
			r[i] = 1;
		}
		else {
			r[i] = (r[2*p-i] > (pr - i) ? (pr - i) : r[2*p - i]);
		}
		while (str[i + r[i]] == str[i - r[i]]) {
			r[i]++;
		}
		if (i + r[i] > pr) {
			p = i;
			pr = i + r[i];
		}
		if (mid_r < r[i]) {
			mid_r = r[i];
			mid = i;
		}
	}
	ret = s.substr(s, (mid - mid_r + 1) / 2, mid_r - 1);
	return ret;
}