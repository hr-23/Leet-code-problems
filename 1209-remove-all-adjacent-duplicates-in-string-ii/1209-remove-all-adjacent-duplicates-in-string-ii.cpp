class Solution {
public:
    string removeDuplicates(string s, int k) {
      int n=s.size();
        if(n<k)return s;
    stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty() || st.top().first!=s[i])st.push({s[i],1});
           else 
           {
               auto it=st.top();
               st.pop();
               it.second++;
               st.push(it);
           }
            if(st.top().second==k)st.pop();
        }
        string s1;
        while(!st.empty())
        {
              auto it=st.top();st.pop();
            while(it.second--)
                s1+=it.first;
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};