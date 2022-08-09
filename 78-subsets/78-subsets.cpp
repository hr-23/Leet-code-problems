class Solution {
public:
    vector<vector<int>>ans;
    void print(int ind,vector<int>&v,vector<int>nums,int n)
    {
        if(ind==n)
        {
            ans.push_back(v);return;
        }
        v.push_back(nums[ind]);
        print(ind+1,v,nums,n);
        v.pop_back();
        print(ind+1,v,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        print(0,v,nums,nums.size());
      return ans;
    }
};