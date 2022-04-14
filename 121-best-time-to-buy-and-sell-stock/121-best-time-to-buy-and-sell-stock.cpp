class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int min=prices[0];
        int pro=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)min=prices[i];
            int p=prices[i]-min;
            if(p>pro)pro=p;
        }
        return pro;
    }
};