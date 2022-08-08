class Solution {
public:
    void sortColors(vector<int>& nums) {
        // dutch national flar algorithm 
        // three clours , three variables , 
        // low , mid and high 
        // always here mid plays an important role 
    int l=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)swap(nums[l++],nums[mid++]);
            else if(nums[mid]==1)mid++;
            else if(nums[mid]==2)swap(nums[mid],nums[high--]);
        }
    }
};