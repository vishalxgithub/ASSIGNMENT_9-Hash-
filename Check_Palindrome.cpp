int Solution::solve(string A) {
    vector<int> hash(26,0);
    for(auto a: A)
        hash[a-'a']++;
    int odd = 0;
    for(auto a : hash)
        if(a%2) odd++;
    return !(odd>1);
}
