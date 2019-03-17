int bitwiseComplement(int N) {
    if(N == 0)
        return 1;
    int res = 0;
    int num[64] = {0};
    int i = 0;
    while(N)
    {
        num[i++] = N & 1;
        N = N >> 1;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        if(num[j] == 0)
            res = res * 2 + 1;
        else
            res *= 2;
    }
    return res;
}