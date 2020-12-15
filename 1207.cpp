    bool uniqueOccurrences(vector<int>& arr) {
        if(!arr.empty())
            return false;
        unordered_map<int, int> m;
        for(auto& x:arr){
            m[x]++;
        }
        vector<int> t;
        for(auto& x:m){
            t.push_back(x.second);
        }
        sort(t.begin(), t.end());
        for(int i = 1; i < t.size(); i++){
            if(t[i] == t[i - 1])
                return false;
        }
        return true;
    }