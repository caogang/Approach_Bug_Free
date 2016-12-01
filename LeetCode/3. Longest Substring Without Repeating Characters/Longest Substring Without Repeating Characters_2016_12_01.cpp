int lengthOfLongestSubstring(string s) {
	int len = s.length();
	int left = 0; int ans = 0;
	int last[256];
	memset(last, -1, sizeof(last));
	for (int i = 0; i < len; i++) {
		if (last[s[i]] >= left) {
			left = last[s[i]] + 1;
		}
		last[s[i]] = i;
		ans = ans >= (i - left + 1) ? ans : (i - left + 1);
	}
	return ans;
}