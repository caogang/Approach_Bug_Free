int reverse(int x) {
	long ret = 1;
	if (x == 0) {
		return x;
	}
	if (x < 0) {
		x = -x;
	}
	while (x) {
		ret *= (x % 10);
		x /= 10;
	}
	
	if (ret > INT_MAX || -ret < INT_MIN) {
		return 0;
	}
	return ret;
}