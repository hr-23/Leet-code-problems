class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // int the brute force approach the time complexity is o(n^2) and space complexity is o(n)
        // we have to do it in o(n) time complexity that is using hash table (unordered map)
    // the logic is to take a hash table then calculate target-nums[i] if it is there in the map then return the index of the current pointer and the ans value .
       //recall the find function in map  -it only accepts keys
unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
               return {m[target-nums[i]],i};
            }
            m[nums[i]]=i;
        }
      return {-1,-1};
    }
    
};