    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        if(newInterval.empty())
            return intervals;
        if(intervals.empty())
        {
            res.push_back(newInterval);
            return res;
        }
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int size = intervals.size();
        for(int i = 0; i < size; i++)
        {
            int l = intervals[i][0], r = intervals[i][1];
            if(res.empty() || res.back()[1] < l)
            {
                res.push_back({l, r});
            }
            else
            {
                res.back()[1] = max(res.back()[1],  r);
            }
        }
        return res;
    }