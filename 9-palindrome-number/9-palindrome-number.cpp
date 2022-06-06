class Solution {
public:
    bool isPalindrome(int x) {
        long long  n=0,t;
if(x<0)return false;
        t=x;
        while(x)
        {
            long long r=x%10;
            n=n*10+r;
            x/=10;
        }
        if(t==n)return true;
        return false;
    }
};