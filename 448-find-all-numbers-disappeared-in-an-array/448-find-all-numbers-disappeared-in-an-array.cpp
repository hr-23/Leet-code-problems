class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        set<int>st(nums.begin(),nums.end());
        for(int i=1;i<=n;i++)
        {
            if(st.find(i)==st.end())v.push_back(i);
        }
        return v;
    }
};