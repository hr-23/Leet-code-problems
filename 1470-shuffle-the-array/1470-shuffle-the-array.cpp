class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        int i=0;
    while(i<n){
            v.emplace_back(nums[i]);
            v.emplace_back(nums[i+n]);i++;
        }
        return v;
    }
};