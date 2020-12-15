    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> m;
        for(auto& s:strs){
            string t = get(s);
            if(m.count(t))
            {
                res[m[t]].push_back(s);
            }
            else
            {
                m[t] = res.size();
                res.push_back({s});
            }
        }
        return res;
    }

    string get(string s)
    {
        sort(s.begin(), s.end());
        return s;
    }