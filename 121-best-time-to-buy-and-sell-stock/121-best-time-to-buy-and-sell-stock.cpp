class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxpro=0;
        int min=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)min=prices[i];
            maxpro=max(maxpro,prices[i]-min);
        }
        return maxpro;
    }
};