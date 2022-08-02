class Solution {
public:
    int jump(vector<int>& nums) {
       int n=nums.size();
        if(n==1)return 0;
        if(nums[0]==0)return -1;
        int c=0,j=0,m=0;
    
        for(int i=0;i<n-1;i++)
        {
            m=max(m,nums[i]+i);
            if(i==j)
            {
                c++;j=m;
            }
        }
        return c;
    }
};