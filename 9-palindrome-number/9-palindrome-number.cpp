class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
         vector<int>v;
        while(x)
        {
            int p=x%10;
             v.emplace_back(p);x/=10;
        }
        vector<int>s(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(s==v)return true;
        return false;
    }
};