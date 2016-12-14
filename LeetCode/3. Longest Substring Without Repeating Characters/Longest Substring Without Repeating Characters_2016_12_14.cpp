int lengthOfLongestSubstring(string s) {
	int ret = 0;
	int left = 0;
	int last[256];
	memset(last, -1, sizeof(last));
	if (s.length() <= 0) {
		return 0;
	}
	
	for (int i = 0; i < s.length(); i++) {
		if (last[s[i]] >= left) {
			left = last[s[i]] + 1;
		}
		if (i - left + 1 > ret) {
			ret = i - left + 1;
		}
		last[s[i]] = i;
	}
	return ret;
}