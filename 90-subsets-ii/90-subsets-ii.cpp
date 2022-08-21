class Solution {
public:
set<vector<int>>s;
    void print(vector<int>&ds,vector<int>&nums,int n,int ind)
    {
        if(ind==n)
        {
            s.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        print(ds,nums,n,ind+1);
        ds.pop_back();
        print(ds,nums,n,ind+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int>ds;
        sort(nums.begin(),nums.end());
        print(ds,nums,nums.size(),0);
        vector<vector<int>>v;
        for(auto it:s)
            v.push_back(it);
        return v;
    }
};