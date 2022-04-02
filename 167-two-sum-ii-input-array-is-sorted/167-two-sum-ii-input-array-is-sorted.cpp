class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i=0,j=nums.size()-1;
        // as that the array is sorted we have to think tha approach of binary search ,so that also recall the same sum in which we used map to find the target
        while(i<j)
        {
            if(nums[i]+nums[j]==target)
                return {i+1,j+1};
            else if(nums[i]+nums[j]>target)j--;
            else i++;
        }
        return {0,0};
    }
};