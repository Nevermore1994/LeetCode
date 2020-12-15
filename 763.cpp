#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S) {
        int s[26] = {0};
        for(int i = 0; i < S.size(); i++){
            s[S[i] - 'a'] = i;
        }
        int preIndex = -1, index = -1;
        vector<int> res;
        for(int i = 0; i < S.size(); i++){
            preIndex = index;
            index = s[S[i] - 'a'];
            while(i < index){
                index = max(index, s[S[i] - 'a']);
                i++;
            }
            res.push_back(index - preIndex);
        }
        return res;
    }
};
//"abwklij"