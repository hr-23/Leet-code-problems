class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int>v1(nums.size(),0);
        int l=0,r=nums.size()-1;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(abs(nums[l])<abs(nums[r]))
            {
                v1[i]=nums[r]*nums[r];
                r--;
            }
            else
            {
                v1[i]=nums[l]*nums[l];
                l++;
            }
        }
        return v1;
    }
};