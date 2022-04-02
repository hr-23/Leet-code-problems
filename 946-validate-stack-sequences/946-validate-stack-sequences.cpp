class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int j=0;
          for(auto it:pushed)
          {
              s.push(it);
              while(!s.empty() && s.top()==popped[j])
              {
                  s.pop();j++;
               }
          }
        if(s.empty())return true;
        return false;
    }
};