class Solution {
public:
    bool checkIfPangram(string s) {
         unordered_map<char,int>m;
        for(auto it:s)
            m[it]++;
        if(m.size()==26)return true;
        return false;
    }
};