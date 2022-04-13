class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int m=prices[0];
    int mp=0;
        for(int i=0;i<prices.size();i++)
        {
            int sum=prices[i]-m;
            if(sum>mp)mp=sum;
            if(prices[i]<m)m=prices[i];
        }
return mp;
    }
};