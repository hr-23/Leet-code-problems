class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    // move all the zeroes to the right of the vector
     int j=0;
       for(int i=0;i<nums.size();i++)
           if(nums[i]!=0)
               nums[j++]=nums[i];
        for(;j<nums.size();j++)nums[j]=0;return ;
        
    }
};