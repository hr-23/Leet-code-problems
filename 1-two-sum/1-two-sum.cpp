class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // in o(n) time compelxity  run time :8ms
     map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
    
};