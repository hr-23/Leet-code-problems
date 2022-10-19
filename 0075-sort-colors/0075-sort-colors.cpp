class Solution {
public:
    void sortColors(vector<int>& nums) {
     // dutch natioanl flag algorithm 
        // uses three colours , three variables 
        // low,mid,high 
        // mid plays a key role 
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)swap(nums[mid++],nums[low++]);
            else if(nums[mid]==1)mid++;
            else if(nums[mid]==2)swap(nums[mid],nums[high--]);
        }
       
    }
};