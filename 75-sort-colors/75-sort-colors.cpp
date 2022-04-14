class Solution {
public:
    void sortColors(vector<int>& nums) {
// this problem have three approaches once think of them and the third and optimal one is that of DNF problem . first point low and mid to zero and high to size-1 and then whenever nums[mid] encounters 0 then swap nums[mid++] and nums[low++] and if it encounters 1 them mid++ and then if it encounters 2 then swap(nums[high--] and nums[mid])
        
       int low=0,mid=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
                swap(nums[low++],nums[mid++]);
            else if (nums[mid]==1)
                mid++;
            else swap(nums[high--],nums[mid]);
        }
        // this algorithm is dutch national flag problem as it has three colours and is based on the fact that all numbers form 0 to low-1 will be 0 and high+1 to size-1 will be 2 and low to mid-1 will be 1 after this algo ;
        
    }
};