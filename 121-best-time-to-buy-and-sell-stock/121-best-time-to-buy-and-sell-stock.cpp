class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minpri=prices[0];
        int maxpro=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minpri)minpri=prices[i];
           int sum=prices[i]-minpri;
            if(sum>maxpro)maxpro=sum;
        }
        return maxpro;
    }
};