class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int m=INT_MAX;
        int pro=0;
        for(int i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            pro=max(pro,prices[i]-m);
        }
        return pro;
    }
};