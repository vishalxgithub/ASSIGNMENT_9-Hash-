class Solution {
public:

    int numJewelsInStones(string j, string s) {
        int count = 0;
        vector<int> hash(256,0);
        for(auto a:s)
            hash[a]++;
        for(auto b:j){
            count += hash[b];
        }
        return count;
    }
};
