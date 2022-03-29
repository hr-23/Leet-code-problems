class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto it:m)
            if(it.second>=2)
                return it.first;
        return -1;
    }
};