    bool lemonadeChange(vector<int>& bills) {
        if(bills.empty())
            return true;
        int n5 = 0, n10 = 0, n20 = 0;
        for(auto& x:bills){
            if(x == 5)
                n5++; 
            else if( x == 10)
            {
                if(n5 == 0)
                    return false;
                n10++;
                n5--;
            }
            else
            {
                if(n5 == 0)
                    return false;
                n20++;
                n5--;
                if(n10 > 0)
                    n10--;
                else if(n5 >= 2)
                    n5 -= 2;
                else
                    return false;
            }
        }
        return true;
    }
