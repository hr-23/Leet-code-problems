class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int c=0;
        while(low<high)
        {
            if(nums[high]+nums[low]==k)
            {
                c++;low++;high--;
            }
            else if(nums[high]+nums[low]>k)
                high--;
            else low++;
        }
        return c;
    }
};
