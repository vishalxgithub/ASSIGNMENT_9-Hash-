class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int t)
  {
      unordered_map<int, int> hash;
      vector<int> ans;
      for (int i = 0; i < nums.size(); i++) {
        if (hash.find(t - nums[i]) != hash.end()) {
          ans.push_back(hash[t - nums[i]]);
          ans.push_back(i);			
          return ans;
		}
		hash[nums[i]] = i;
	}
	return ans;
}
};
