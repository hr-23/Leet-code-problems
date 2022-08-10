class Solution {
public:
    // recall all the recusrion going on here and the technique of poushing and then poping back
    vector<vector<int>>v;
    void print(int ind,vector<int>&nums,vector<int>&ds,int n)
    {
        if(ind ==n)
        {
            v.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        print(ind+1,nums,ds,n);
        ds.pop_back();
        print(ind+1,nums,ds,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        print(0,nums,ds,nums.size());
        return v;
    }
};