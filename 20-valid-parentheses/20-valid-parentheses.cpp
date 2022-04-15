class Solution {
public:
    bool isvalid(char o,char c)
    {
        if(o=='[' && c==']')return true;
        if(o=='{' && c=='}')return true;
        if(o=='(' && c==')')return true;
        return false;
    }
    // think of a case where the first case is invalid char and this should not be empty
    bool isValid(string s) {
     stack<char>st;
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='[' || s[i]=='{' || s[i]=='(')st.push(s[i]);
          else if(!st.empty() && isvalid(st.top(),s[i]))
              st.pop();
          else return false;
      }
        if(st.empty())return true;
        return false;
    }
};