class Solution {
public:
    int search(vector<int>& nums, int target) {
    map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
    for(auto it:m)
    {
        if(it.first==target)return it.second;
    }
        return -1;
    }
    
};