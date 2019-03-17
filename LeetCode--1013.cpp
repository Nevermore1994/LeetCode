//这个是利用余数进行查找
//例如 520%60 = 40 就查找有没有的20 
//为啥是540呢 因为 time里最大是500
//为啥先加后增呢 因为是需要两个才能组成（如果可以一个的话，就是先增后加）
int numPairsDivisibleBy60(vector<int>& time) {
    int s[60] = {0};
    int res = 0;
    for(auto x : time)
    {
        res += s[(540 - x) % 60];
        s[x%60]++;
    }
    return res;
}
     
