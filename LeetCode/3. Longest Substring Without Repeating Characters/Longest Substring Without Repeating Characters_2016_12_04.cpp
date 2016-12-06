int lengthOfLongestSubstring(string s) {
	int ret = 0;
	int len = s.length();
	int last[256];
	memset(last, -1, sizeof(last));
	int left = 0;
	for (int i = 0; i < len; i++) {
		if (last[s[i]] >= left) {
			left = last[s[i]] + 1;
		}
		ret = (ret > (i - left + 1) ? ret : (i - left + 1));
	}
	return ret;
}