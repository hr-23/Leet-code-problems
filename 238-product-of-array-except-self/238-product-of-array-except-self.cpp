class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int c=count(nums.begin(),nums.end(),0);
        if(c>=2)
        {
           for(int i=0;i<nums.size();i++)nums[i]=0;
            return nums;
        }
         if(c==1)
         {
             int sum=1;
              for(int i=0;i<nums.size();i++){
                  if(nums[i]!=0)
                sum*=nums[i];}
             for(int i=0;i<nums.size();i++)
             {
                 if(nums[i]!=0)nums[i]=0;
                 else nums[i]=sum;
             }
return nums;
         }
       int sum=1;
      for(int i=0;i<nums.size();i++)
          sum*=nums[i];
       for(int i=0;i<nums.size();i++)
           nums[i]=sum/nums[i];
        return nums;
    }
};