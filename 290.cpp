    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> m;
        unordered_map<char, string> g;
        string t;
        string p = pattern;
        int g[26] = {0};
        for(int i = 0; i < s.size(); i++){
            string str;
            while(i < s.size() && s[i] != ' ')
            {
                str.push_back(s[i++]);
            }
            if(p.empty())
                return false;
            char c = p[0];
            p = p.substr(1);
            if((g.count(c) && g[c] != str) || (m.count(str) && m[str] != c))
                return false;
            g[c] = str;
            m[str] = c;
            t.push_back(c);
        }
        return t == pattern;
    }