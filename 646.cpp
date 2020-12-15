    int findLongestChain(vector<vector<int>>& pairs) {
        if(pairs.empty())
            return 0;
        sort(pairs.begin(), pairs.end(), [](vector<int>& lhs, vector<int>& rhs) { return lhs[1] < rhs[1];});
        int res = 1;
        int t = pairs[0][1];
        for(int i = 0; i < pairs.size(); i++)
        {
            if(pairs[i][0] > t)
            {
                t = pairs[i][1];
                res++;
            }
        }
        return res;
    } //贪心