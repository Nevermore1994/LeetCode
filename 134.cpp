int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    if(gas.empty())
        return -1;
    for(int i = 0; i < gas.size(); i++){
        gas.push_back(gas[0]);
        gas.erase(gas.begin());
        cost.push_back(cost[0]);
        cost.erase(cost.begin());
        if(solve(gas, cost, i))
            return i;
    }
    return -1;
}

bool solve(vector<int> gas, vector<int> cost, int t)
{
    int now = 0;
    int size = gas.size();
    for(int i = 0; i < size; i++){
        if(i > 0){
            now -= cost[i - 1];
            if(now < 0)
                return false;
        }
        now += gas[i];
    }
    return now >= cost[size - 1];   
}

//单次

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    if(gas.empty())
        return -1;
    int res = 0;
    int size = gas.size();
    while(res < size){
        int sumgas = 0, sumcost = 0;
        int cnt = 0;
        while(cnt < size){
            int t = (res + cnt) % size;
            sumgas += gas[t];
            sumcost += cost[t];
            if(sumgas < sumcost)
                break;
            cnt++;
        }
        if(cnt == size){
            return res;
        } else {
            res += cnt + 1;
        }
    }
    return -1;
}
