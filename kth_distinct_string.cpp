class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        for(auto a : arr)
            m[a]++;
        for(auto a : arr){
            if(m[a] == 1){
                if(k == 1)
                    return a;
                k--;
            }
        }
        return "";
    }
};
