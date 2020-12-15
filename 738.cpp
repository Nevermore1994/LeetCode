    int monotoneIncreasingDigits(int N) {
        string s = to_string(N);
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i + 1] < s[i]){
                s[i] -= 1;
                while(i < s.size() - 1)
                {
                    s[i + 1] = '9';
                    i++;
                }
                i = -1;
            }
        }
        return stoi(s);
    }