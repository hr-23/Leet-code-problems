class Solution {
public:
    bool canConstruct(string a, string b) {
        map<char,int>m1,m2;
        for(int i=0;i<a.length();i++)
            m1[a[i]]++;
         for(int i=0;i<b.length();i++)
         {
             m2[b[i]]++;
         }
         for(int i=0;i<a.length();i++)
         {
             // cout<<m1[a[i]]<<" "<<m2[a[i]]<<"\n";
             if(m1[a[i]]>m2[a[i]])return false;
         }
        return true;
    }
};