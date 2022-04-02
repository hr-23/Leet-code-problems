class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int,int>m;
        vector<int>v(2);
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v[1]=i+1;
                v[0]=m[target-nums[i]]+1;return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};