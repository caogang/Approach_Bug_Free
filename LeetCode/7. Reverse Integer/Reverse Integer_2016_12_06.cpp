int reverse(int x) {
	long ret = 0;
	while (x > 0) {
		ret = ret * 10 + x % 10;
		x /= 10;
	}
	if (ret > INT_MAX) {
		return 0;
	}
	else if (ret < INT_MIN){
		return 0;
	}
	else {
		return ret;
	}
}