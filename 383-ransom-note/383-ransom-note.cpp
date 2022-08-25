class Solution {
public:
    bool canConstruct(string a, string b) {
        int count[26]={0};
        for(auto it:b)count[it-'a']++;
        for(auto it:a)
            if(count[it-'a']-- ==0)return false;
        return true;
    }
};