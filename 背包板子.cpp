///01背包问题 限制了件数  

// n为种类 W为总重量
int dp[max + 1] = {0};

void solve()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = W; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j -w[i]] + v[i]);
    }
     
   // return dp[W];
}

//完全背包问题 二层循环方向和01背包相反

int dp[max + 1] = {0};
 
void solve()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = w[i]; j <= W; j++)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
    
    //return dp[W];
}

//组成总数为n的钱有多少种方案

long long solve(vector<int> nums, int n)
{
    vector<long long> dp(n + 1, 0);
    dp[0] = 1; //初始化
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = nums[i]; j <= n; j++)
            dp[j] += dp[j - nums[i]];
    }
    
    return dp[n];
}
