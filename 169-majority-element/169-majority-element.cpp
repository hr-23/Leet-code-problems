class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>m;
       for(auto it:nums)
           m[it]++;
        int n=floor((float)nums.size()/2);
        for(auto it:m)
        {
            if(it.second>n)return it.first;
        }
        return -1;
    }
};