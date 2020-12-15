    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.size() == 0)
            return intervals;
        sort(intervals.begin(), intervals.end(), [](Interval& lhs, Interval& rhs)->bool{ return lhs.start < rhs.start; });
        for(auto i = intervals.begin(); i != intervals.end() - 1; i++)
        {
             if(i->end >= (i+1)->start)
             {
                 i->end = max((i+1)->end,i->end);
                 intervals.erase(i+1);
                 i--;
             }
        }
        return intervals;
    }