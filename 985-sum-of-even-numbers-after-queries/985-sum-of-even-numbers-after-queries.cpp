class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
         int sum = 0, N = queries.size();
        for (int n : nums) {
            if (n % 2 == 0) sum += n;
        }
        
        vector<int> ans(N, 0);
   
        for (int i = 0; i < N; i++) {
            int val = queries[i][0], index = queries[i][1];
            int oldValue = nums[index];
            nums[index] += val;
            
            bool wasEven = (oldValue % 2) == 0;
            bool nowEven = (nums[index] % 2 == 0);
            
            if (wasEven && nowEven) {
                ans[i] = sum + val;
                sum += val;
            } else if (!wasEven && nowEven) {
                ans[i] = sum + nums[index];
                sum += nums[index];
            } else if (wasEven && !nowEven) {
                ans[i] = sum - oldValue;
                sum -= oldValue;
            } else {
                ans[i] = sum;
            }
        }
        
        return ans;
    }
};