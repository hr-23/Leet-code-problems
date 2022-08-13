class Solution {
public:
vector<vector<int>>v;
    void print(vector<int>&nums,vector<int>&ds,int ind,int n)
    {
        if(ind>=n)
        {
            v.push_back(ds);return;
        }
        ds.push_back(nums[ind]);
        print(nums,ds,ind+1,n);
        ds.pop_back();
        print(nums,ds,ind+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>ds;
        int n=nums.size();
        print(nums,ds,0,n);
        return v;
    }
};