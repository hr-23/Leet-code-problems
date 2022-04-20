class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // recall the kadane algorighm 
        // traverse through the array and keep count of maximum sum value obtained and when the sum becomes negative make it zero
      int maxi=INT_MIN,sum=0;
       for(auto it:nums)
       {
           sum+=it;
           maxi=max(maxi,sum);
           if(sum<0)sum=0;
       }
        return maxi;
    }
};