string longestPalindrome(string s) {
	int len = s.length();
	int p = 0, pr = 0; 
	int max_mid = 0, max_r = 0;
	string str = ""; string ans = "";
	str += '@';
	for (int i = 0; i < len; i++) {
		str += '#';
		str += s[i];
	}
	str += '#';
	str += '$'; int r[2*len + 1];
	for (int i = 1; i < (2*len + 2); i++) {
		if (i < pr) {
			r[i] = r[2*p - i] > (pr - i) ? (pr - i) : r[2*p - i];
		}
		else {
			r[i] = 1;
		}
		while (str[i+r[i]] == str[i-r[i]]) {
			r[i]++;
		}
		
		if (r[i] > max_r) {
			max_mid = i;
			max_r = r[i];
		}
	}
	ans = s.substr((max_mid - max_r + 1) / 2, max_r - 1);
	return ans;
}