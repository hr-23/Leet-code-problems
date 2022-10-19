class Solution {
public:
   static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second<b.second)return true;
        if(a.second==b.second)return a.first<b.first;
        return false;
    }
    static int cb(int a)
    {
        int cnt=0;
        while(a)
        {
            a=a&(a-1);
            cnt++;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& nums) {
      vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            int c=cb(nums[i]);
            v.emplace_back(nums[i],c);
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>res;
        for(auto it:v)
            res.push_back(it.first);
        return res;
    }
};