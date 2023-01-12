int Solution::solve(vector<int> &A) {
    unordered_map<int,int> m;
    for(auto a : A){
        m[a]++;
    }
    for(auto a : A){
        if(m[a]>1)
            return a;
    }
    return -1;
}
