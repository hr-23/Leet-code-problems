class Solution {
public:
    bool search(vector<int>& nums, int target) {
       /* set<int>st(nums.begin(),nums.end());
       if(st.find(target)!=st.end())return true;
        return false;*/
        // two pointer approach 
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(nums[l]==target || nums[r]==target)return true;
            l++;r--;
        }
           return false ; 
    }
};