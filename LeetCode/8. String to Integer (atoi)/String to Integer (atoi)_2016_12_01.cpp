int myAtoi(string str) {
	if (str == "") {
		return 0;
	}
	str.earse(0, str.find_first_no_of(" "));
	str.earse(str.find_last_no_of(" ") + 1);
	int i = 0;
	int len = str.length();
	if (i == len) {
		return 0;
	}
	
	int sign = 1;
	if (str[i] == '+') {
		sign = 1;
		i++;
	}
	else if (str[i] == '-') {
		sign = -1;
		i++;
	}
	
	long long ret = 0;
	for (;i < len; i++) {
		if (str[i] < '0' || str[i] > '9') break;
		ret = ret * 10 + str[i] - '0';
		if (ret > INT_MAX) break;
	}
	ret *= sign;
	if (ret > INT_MAX) return INT_MAX;
	if (ret < INT_MIN) return INT_MIN;
	return ret;
}