class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=*max_element(candies.begin(),candies.end());
        vector<bool>v;
        for(auto &it:candies)
        {
            if(it+extraCandies>=m)
                v.push_back(1);
            else v.push_back(0);
        }
        return v;
    }
};