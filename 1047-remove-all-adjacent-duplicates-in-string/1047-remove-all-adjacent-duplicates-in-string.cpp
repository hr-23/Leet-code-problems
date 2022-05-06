class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(!st.empty() && st.top()==s[i] )
                st.pop();
            else st.push(s[i]);
        }
        string s1;
        while(!st.empty())
        {
           char c=st.top();
            st.pop();
            s1+=c;
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
    // a y 
};