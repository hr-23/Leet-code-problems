class Solution {
public:
    bool isPalindrome(string s) {
string t;
        for(int i=0;i<s.length();i++)
            if(s[i]<=90 && s[i]>=65)
            {
                s[i]+=32;
                t+=s[i];
            }
            else if((s[i]>=97 && s[i]<=122) ||(s[i]<='9' && s[i]>='0' ))
                t+=s[i];
        string p=t;
        reverse(t.begin(),t.end());
        if(p==t)return true;
        return false;
    }
};