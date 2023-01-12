class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> m;
        for(auto a : nums)
            m[a]++;
        for(auto a : m){
            int n = a.second-1;
            count += (n*(n+1))/2;
        }
        return count;
    }
};
