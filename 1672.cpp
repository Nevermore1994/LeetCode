    int maximumWealth(vector<vector<int>>& accounts) {
        int maxn = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            for(int j = 1; j < accounts[i].size(); j++)
            {
                accounts[i][0] += accounts[i][j];
            }
            maxn = max(maxn, accounts[i][0]);
        }
        return maxn; 
    }