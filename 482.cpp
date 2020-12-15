    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1)
            return {};
        map<int, vector<int>> m;
        int size = intervals.size();
        for(int i = 0; i < size; i++){
            m[intervals[i][0]] = i;
        }
        vector<int> res;
        for(auto& v:intervals){
            auto it = upper_bound(m.begin(), m.end(), v[1]);
            if(it != m.end())
            {
                res.push_back(it->second);
            }
            else
            {
                res.push_back(-1);
            }
        }
        return res;
    }