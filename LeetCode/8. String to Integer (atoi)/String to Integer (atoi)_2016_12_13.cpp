int myAtoi(string str) {
	if (str.length() == 0) {
		return -1;
	}
	str.erase(0, str.find_first_not_of(' '));
	str.erase(str.find_last_not_of(' '));
	if (str.length() == 0) {
		return -1;
	}
	
	int sign = 1;
	int i = 0;
	long long ret = 0;
	if (str[i] == '+') {
		sign = 1;
		i++;
	}
	else if (str[i] == '-') {
		sign = -1;
		i++;
	}
	
	while (i < str.length()) {
		if (str[i] - '0' < 0 || str[i] - '0' > 9) {
			break;
		}
		if (ret > INT_MAX || ret < INT_MIN) {
			break;
		}
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	ret *= sign;
	if (ret > INT_MAX) {
		return INT_MAX;
	}
	else if (ret < INT_MIN) {
		return INT_MIN;
	}
	
	return ret;
}