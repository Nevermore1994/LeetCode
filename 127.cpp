    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words;
        int res = 0;
        for(auto& s : wordList)
            words.insert(s);
        if(!words.count(endWord))
            return res;
        unordered_set<string> uplist({beginWord});
        unordered_set<string> downlist({endWord});
        int wordlen = beginWord.size();
        int wordsize = wordList.size();
        vector<int> list(wordsize,  0);
        res = 2;
        while(!uplist.empty())
        {
            unordered_set<string> next;
            for(auto s: uplist)
            {
                for(int i = 0; i < wordsize; ++i)
                {
                     if(checkValid(s, wordList[i]))
                     {
                        if(downlist.count(wordList[i]) > 0)
                        {
                            return res;
                        }
                        if(list[i] == 0)
                        {
                            next.insert(wordList[i]);
                        }
                        list[i] = 1;
                     }
                }
            }
            res++;
            uplist = next;
            if(uplist.size() > downlist.size())
                swap(uplist, downlist);
        }
        return 0;
    }

    bool checkValid(string& str1, string& str2){
        if(str1.size() != str2.size())
            return false;
        int count = 0;
        int size = str1.size();
        for(int i = 0; i < size; ++i)
        {
            if(str1[i] != str2[i])
                count ++;
            if(count >= 2)
                break;
        }
        return count == 1;
    }