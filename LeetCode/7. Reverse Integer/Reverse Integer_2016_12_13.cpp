int reverse(int x) {
	long long ret = 0;
	int sign = 1;
	if (x < 0) {
		sign = -1;
		x = -x;
	}
	else {
		sign = 1;
	}
	while (x != 0) {
		ret = ret * 10 + x % 10;
		x /= 10;
	}
	ret *= sign;
	if (ret > INT_MAX) {
		return 0;
	}
	else if (ret < INT_MIN) {
		return 0;
	}
	return ret;
}