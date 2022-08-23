class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
   string s=strs[0];
        for(int i=0;i<strs.size();i++)
        {
            int j;
            for(j=0;j<strs[i].length();j++)
            {
                 if(strs[i][j]!=s[j])break;
            }
            s=s.substr(0,j);
            if(s=="")return "";
        }
        return s;
    }
};