class Solution {
private:
    int FR(int n){      //finding reverse//
        int sum = 0;
        while(n > 0){
            int r = n%10;
            sum = sum*10+r;
            n = n/10;
        }
        return sum;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        int ans = 0;
        for(auto n : nums){
            if(s.find(n) == s.end()){
                ans++;
                s.insert(n);
            }
            if(s.find(FR(n)) == s.end()){
                ans++;
                s.insert(FR(n));
            }
        }
        return ans;
    }
};
