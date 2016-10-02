bool operator==(const Interval a,const Interval b)
       	{
       		return a.end <= b.start || a.start <= b.end;
       	}
       	 bool operator<(const Interval a,const Interval b)
       	{
       		return a.end < b.start;
       	}
       	 bool operator>(const Interval a,const Interval b)
       	{
       		return a.start < b.end;
       	}
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
       		vector<Interval> result;
       		if ( intervals.begin() == intervals.end()) {
       			result.push_back(newInterval);
       			return result;
       		}
       		auto bound = equal_range(intervals.begin(),intervals.end(),newInterval);
       		if (bound.first != intervals.end() && bound.first->start < newInterval.start ) {
       			newInterval.start = bound.first->start;
       		}
       		if ( (--bound.second)->end > newInterval.end ) {
       			newInterval.end = bound.second->end;
       		}
       		result.insert(result.end(),intervals.begin(),bound.first);
       		result.push_back(newInterval);
       		result.insert(result.end(),++bound.second,intervals.end());
       		return result;
       	}
};
