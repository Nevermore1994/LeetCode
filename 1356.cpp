    vector<int> sortByBits(vector<int>& arr) {
        if(arr.empty())
            return arr;
        sort(arr.begin(), arr.end());
        map<int, vector<int>> m;
        for(auto& x:arr){
            int v = get(x);
            m[v].push_back(x);
        }
        vector<int> res;
        for(auto& it:m){
            res.insert(res.end(),it.second.begin(), it.second.end());
        }
        return res;
    }

    int get(int x){
        int res = 0;
        while(x){
            res++;
            x &= x - 1;
        }
        return res;
    }