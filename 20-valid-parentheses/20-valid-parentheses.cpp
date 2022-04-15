class Solution {
public:
    bool isvalid(char o,char c)
    {
        if(o=='(' && c==')')return true;
        if(o=='{' && c=='}')return true;
        if(o=='[' && c==']')return true;
        return false;
    }
    bool isValid(string s) {
         stack<int>st;
        if(s.size()==1)return false;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='(' || s[i]=='[' || s[i]=='{')st.push(s[i]);
            else 
            {
                if(st.empty())return false;
                if(!st.empty() && isvalid(st.top(),s[i]))
                    st.pop();
                else return false;
            }
            
         }
        if(st.empty())return true;
 return false;
    }
};