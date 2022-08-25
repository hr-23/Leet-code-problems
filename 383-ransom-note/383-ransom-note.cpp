class Solution {
public:
    bool canConstruct(string a, string b) {
       unordered_map<char,int>m1,m2;
        for(auto it:a)m1[it]++;
        for(auto it:b)m2[it]++;
        for(int i=0;i<a.length();i++)
            if(m1[a[i]]>m2[a[i]])return false;
        return true;
    }
};