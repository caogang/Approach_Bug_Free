int romanToInt(string s) {
	int ret = 0;
	unordered_map<char, int> num;
	num['I'] = 1;
    num['V'] = 5;
    num['X'] = 10;
    num['L'] = 50;
    num['C'] = 100;
    num['D'] = 500;
    num['M'] = 1000;
	if (s.length() <= 0) {
		return ret;
	}
	for (int i = 0; i < s.length(); i++) {
		ret += num[s[i]];
	}
	return ret;
}