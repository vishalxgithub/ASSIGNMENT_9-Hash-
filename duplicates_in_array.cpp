class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> hash(100001, 0);
        for(auto a : nums)
            hash[a]++;
        vector<int> ans;
        for(int i=0; i<hash.size(); i++){
            if(hash[i]>1)
                ans.push_back(i);
        }
        return ans;
    }
};
