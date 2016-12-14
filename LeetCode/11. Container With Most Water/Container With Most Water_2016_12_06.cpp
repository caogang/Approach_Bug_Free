int maxArea(vector<int> &height) {
	int len = height.size();
	int max_area = 0, area = 0;
	int L = 0, R = len - 1;
	while (L < R) {
		if (height[L] < height[R]) {
			area = height[L] * (R - L);
			L++;
		}
		else {
			area = height[R] * (R - L);
			R--;
		}
		max_area = max_area > area ? max_area : area;
	}
	return max_area;
}