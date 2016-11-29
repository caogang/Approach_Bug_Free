vector<int> two_sum(vector<int>& nums, int target) {
	std::unordered_map<int> hash_map;
	std::vector<int> ret;
	for (int i = 0; i < hash_map.size(); i++) {
		if (hash_map.contains(target - nums[i])) {
			ret.push_back(i);
			ret.push_back(hash_map[target - nums[i]]);
			return ret;
		}
		else {
			hash_map[nums[i]] = i;
		}
	}
	// 不存在和为target的情形
	ret.push_back(-1);
	ret.push_back(-1);
	return ret;
}