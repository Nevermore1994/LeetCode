class Solution {
public:
    int distinctSubseqII(string S) {
      int m[26];
      int dp[2005];
      memset(m, 0, sizeof(m));
      dp[0] = 1;
      int mod = 1e9 + 7;
      for(int i = 0; i < S.size(); i++)
      {
          if(m[S[i] - 'a'] == 0)
          {
              dp[i+1] = 2 * dp[i] % mod;
          }
          else
          {
              dp[i+1] = ((2 * dp[i]) % mod - dp[m[S[i] - 'a']-1] + mod) % mod;
          }
          m[S[i] - 'a'] = i + 1; 
      }
      
      return (dp[S.size()] + mod -1)% mod;
    }
    

};