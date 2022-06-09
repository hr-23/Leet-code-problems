class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i=0,j=nums.size()-1;
        // as that the array is sorted we have to think tha approach of binary search ,so that also recall the same sum in which we used map to find the target
       while(i<j)
       {
           int sum=nums[i]+nums[j];
           if(sum==target)return {i+1,j+1};
           else if(sum>target)j--;
           else i++;
       }
        return {i+1,j+1};
    }
};