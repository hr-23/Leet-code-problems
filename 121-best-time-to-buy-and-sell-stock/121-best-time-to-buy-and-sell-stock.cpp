class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min=prices[0];
        int m=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min)min=prices[i];
            m=max(m,prices[i]-min);
        }
        return m;
    }
};