class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       if(nums.size()<=1)return 0;
        vector<int>v(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>p;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=nums[i])p.push_back(i);
        }
        if(p.size()==0)return 0;
        return p[p.size()-1]-p[0]+1;
    }
};