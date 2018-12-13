//题目要求是O(n) 所以没什么好的排序算法可以解决 基本上限定了是一个for循环解决 
//采用的是哈希表来解决
//大致思路如下： 假设是7 5 6 可以用哈希存下当前的数
// 7 -> m[7] = 1  m[6] = 0 m[8] = 0
// 6 -> m[6] = 2  l = 0, r = 1, t = 2 -> m[6] = 2 m[7] = 2
// 5 -> m[5] = 3  l = 0, r = 2, t = 3 -> m[5] = 3 m[5 + r] = m[7] = 3
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> m;
        int res = 0;
        for(auto x : nums)
        {
            if(m[x] == 0)
            {
                int l = m[x-1], r = m[x+1];
                int t = l + r + 1;
                m[x] = t;
                if(t > res)
                    res = t;
                m[x - l] = t;
                m[x + r] = t; 
            }
        }
        
        return res;
    }
};