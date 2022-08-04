class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int c=count(nums.begin(),nums.end(),0);
      if(c==0)
      {
          int s=1;
          for(int i=0;i<nums.size();i++)s*=nums[i];
          for(int i=0;i<nums.size();i++)nums[i]=s/nums[i];
          return nums;
      }
        if(c==1)
        {
            int s=1;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)s*=nums[i];
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)nums[i]=0;
                else nums[i]=s;
            }
            return nums;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=0;
        }
        return nums;
    }
};