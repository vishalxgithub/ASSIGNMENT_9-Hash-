class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<bool> hash(1001,false);
        for(auto a : nums)
            hash[a] = true;
        while(original < 1001 && hash[original] == true){
            original = original<<1;
        }
        return original;
    }
};
