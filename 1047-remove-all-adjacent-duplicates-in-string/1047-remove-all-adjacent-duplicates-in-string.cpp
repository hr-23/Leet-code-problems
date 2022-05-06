class Solution {
public:
    string removeDuplicates(string s) {
string s1;
        for(auto &it:s)
        {
            if(s1.size()&& s1.back()==it)s1.pop_back();
            else s1.push_back(it);
        }
        return s1;
    }

};