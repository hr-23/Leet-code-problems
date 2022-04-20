class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]==0)
                sum=0;
             if(sum>maxi)maxi=sum;
        }
    return maxi;
    }
};