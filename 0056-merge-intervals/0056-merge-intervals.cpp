class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)return intervals;
        vector<vector<int>>v;
      sort(intervals.begin(),intervals.end());
        v.emplace_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(v.back()[1]>=intervals[i][0])
                v.back()[1]=max(v.back()[1],intervals[i][1]);
            else v.emplace_back(intervals[i]);
        }
        return v;
    }
};