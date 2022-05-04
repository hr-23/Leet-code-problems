class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        int lower=0;
        int high=nums.size()-1;
        int cnt=0;
        while(high>lower)
        {
            if(nums[lower]+nums[high]==k)
            {
                cnt++;lower++;high--;
            }
            else if(nums[lower]+nums[high]>k)
                high--;
            else lower++;
        }
        return cnt;
    }
};
