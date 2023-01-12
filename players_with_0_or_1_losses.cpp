class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> winners;
        unordered_map<int, int> losers;
        for(auto a : matches){
            winners[a[0]]++;
            losers[a[1]]++;
        }
        vector<int> ans1;
        for(auto w : winners){
            if(losers.find(w.first) == losers.end())
                ans1.push_back(w.first);
        }
        vector<int> ans2;
        for(auto l : losers){
            if(l.second == 1)
                ans2.push_back(l.first);
        }
        vector<vector<int>> ans;
        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
