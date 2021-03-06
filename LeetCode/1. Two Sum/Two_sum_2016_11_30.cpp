vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> hash_map;
	vector<int> ret;
	for (int i = 0; i < nums.size(); i++) {
		if (hash_map.find(target - nums[i]) != hash_map.end()) {
			ret.push_back(hash_map[target-nums[i]]);
			ret.push_back(i);
			return ret;
		}
		hash_map[nums[i]] = i;
	}
	
	ret.push_back(-1);
	ret.push_back(-1);
	return ret;
}