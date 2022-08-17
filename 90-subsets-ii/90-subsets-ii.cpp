class Solution {
public:
set<vector<int>>s;
    void print(int ind,int n,vector<int>&nums,vector<int>&ds)
    {
        if(ind==n)
        {
            s.insert(ds);return;
        }
        ds.push_back(nums[ind]);
        print(ind+1,n,nums,ds);
        ds.pop_back();
          print(ind+1,n,nums,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // this sort plays a key role ,know what is it ?
          print(0,n,nums,ds);
      vector<vector<int>>v(s.begin(),s.end());
        return v;
    }
};