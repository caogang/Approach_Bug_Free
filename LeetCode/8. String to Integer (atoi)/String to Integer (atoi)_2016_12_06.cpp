int myAtoi(string str) {
	if (str == "") {
		return 0;
	}
	str.erase(0, str.find_not_of_first(' '));
	str.erase(str.find_not_of_last(' ') + 1, str.length());
	
	if (str == "") {
		return 0;
	}
	int sign = 1;
	int i = 0;
	if (str[i] == '+') {
		sign = 1;
		i++;
	}
	else if (str[i] == '-') {
		sign = -1;
		i++;
	}
	int len = str.length();
	long long ret = 0;
	while (i < len) {
		if (str[i] < '0' || str[i] > '9') {
			break;
		}
		ret = ret * 10 + s[i] - '0';
		if (ret > INT_MAX) {
			break;
		}
	}
	ret = ret * sign;
	if (ret > INT_MAX) {
		return INT_MAX;
	}
	else if (ret < INT_MIN) {
		return INT_MIN;
	}
	return ret;
}