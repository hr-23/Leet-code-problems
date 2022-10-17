class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char>st;
        for(auto it:s)
            st.insert(it);
        if(st.size()==26)return true;
        return false;
    }
};