    int numberOfSubstrings(string s) {
        int res = 0;
        int m[3] = {0};
        int len = s.size();
        for(int l = 0, r = -1; l < len; )
        {
            while(r < len && !(m[0] && m[1] && m[3]))
            {
                if(++r >= len)
                    break;
                m[s[r] - 'a']++;
            }
            res += len - r;
            m[s[l++] - 'a']--;
        }
        return res;
    }