    int countConsistentStrings(string allowed, vector<string>& words) {
        int m[26] = {0};
        int res = 0;
        for(auto c:allowed){
            m[c - 'a'] ++;
        }
        for(auto& str:words){
            bool f = true;
            for(auto c:str){
                if(m[c - 'a'] == 0){
                    f = false;
                    break;
                }
            }
            if(f)
                res++;
        }
        return res;
    }