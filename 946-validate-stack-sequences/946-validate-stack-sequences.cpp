class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       stack<int>s;int j=0;
        // first try to visualize the algorithm and then recall the use of while function 
        // first push the element and then look for popping up 
        for(auto &it:pushed)
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