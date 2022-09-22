class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
       string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                str+=s[i];
            else 
            {
                v.emplace_back(str);str="";
            }
            if(i==s.length()-1)
                v.emplace_back(str);
        }
 for(int i=0;i<v.size();i++)
    {
    	reverse(v[i].begin(),v[i].end());
    }
        string p="";
        for(int i=0;i<v.size();i++)
        {
            p+=v[i];
            if(i!=v.size()-1)p+=' ';
        }
        return p;
    }
};