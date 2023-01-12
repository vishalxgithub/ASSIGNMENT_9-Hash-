class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> hash(101,0);
        for(auto a : nums)
            hash[a]++;
        int sum = 0;
        for(int i=0; i<hash.size(); i++)
            if(hash[i] == 1) sum += i;
        return sum;
    }
};
