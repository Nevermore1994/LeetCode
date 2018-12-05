//反向遍历 如果出现上升的值 将上升的值减去1 然后将后续的值改为9
//例如 332-> 329 -> 299
//我的解法
class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string s = to_string(N);
        for(int i = s.size()-1; i > 0; i--)
        {
            if(s[i] >= s[i-1])
                continue;
            s[i-1] = s[i-1] - 1;
            for(int j = i; j < s.size(); j++)
            {
                s[j] = '9';
            }
        }
        
        return stoi(s);
    }
};

//ACMer的解法
//减少了循环并且自减 更加清晰
class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string s = to_string(N);
        int j = s.size();
        for(int i = s.size()-1; i > 0; i--)
        {
            if(s[i] >= s[i-1])
                continue;
            --s[i-1];
            j = i;
        }
        for(int j = i; j < s.size(); j++)
        {
            s[j] = '9';
        }
        return stoi(s);
    }
};
