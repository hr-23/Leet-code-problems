class Solution {
public:
    bool isPalindrome(string s) {
         for(int i=0,j=s.size()-1;i<j;i++,j--)
         {
             while(isalnum(s[i])==false && i<j)i++;
             while(isalnum(s[j])==false && i<j)j--;
             if(tolower(s[i])!=tolower(s[j]))return false;
         }
        return true;
    }
};