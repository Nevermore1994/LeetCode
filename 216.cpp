vector<vector<int>> solve(int n, int k){
    vector<vector<int>> res;
    vector<int> temp;
    if(n > 45){
        return res;
    }
    dfs(n, k, 0, 1, res, temp);
    
    return res;
}

void dfs(int n, int k, int now, int index, vector<vector<int>>& res, vector<int>& temp){
    if(now == n){
        res.push_back(temp);
        return;
    }
    for(int i = index; i <= 9; ++i){
        temp.push_back(i);
        dfs(n, k, now + i, i + 1, res, temp);
        temp.pop_back();
    }
}