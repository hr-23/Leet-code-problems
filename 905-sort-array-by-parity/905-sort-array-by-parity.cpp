class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
            if(nums[h]%2==0)
            {  swap(nums[h],nums[l]);l++;}
            else h--;
        }
        return nums;
    }
};