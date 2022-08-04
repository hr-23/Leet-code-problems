class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>s(nums.begin(),nums.end());
        vector<int>v;
        for(auto it:s)v.emplace_back(it);
        if(v.size()<=2)return v[v.size()-1];
        return v[v.size()-3];
    }
};