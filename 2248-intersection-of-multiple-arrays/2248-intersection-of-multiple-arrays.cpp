class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
         vector<int>v;
        map<int,int>m;
        for(auto it:nums)
            for(auto it1:it)
            {
                m[it1]++;
                if(m[it1]==nums.size())v.push_back(it1);
            }
             sort(v.begin(),v.end());return v;
    }
};