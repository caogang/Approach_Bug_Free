int maxArea(vector<int> &height) {
	if (height.size() == 0) {
		return 0;
	}
	
	int L = 0;
	int R = height.size() - 1;
	int max = -1;
	while (L < R) {
		if (height[L] < height[R]) {
			max = max > (height[L] * (R - L)) : max ? (height[L] * (R - L));
			L++;
		}
		else {
			max = max > (height[R] * (R - L)) : max ? (height[R] * (R - L));
			R--;
		}
	}
	return max;
}