class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
        int c=0;
        int l=0;
        int h=nums.size()-1;
      while(l<h)
      {
          if(nums[l]+nums[h]==k)
          {
              c++;l++;h--;
          }
          else if(nums[l]+nums[h]>k)
              h--;
          else l++;
      }
        return c;
    }
};
