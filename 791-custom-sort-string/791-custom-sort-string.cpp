class Solution {
public:
    string customSortString(string order, string s) {
 unordered_map<char,int>m;
for(auto it:s)
    m[it]++;
        string t;
for(int i=0;i<order.length();i++)
{
    if(m.find(order[i])!=m.end())
    {
        while(m[order[i]]--)
            t+=order[i];
        m.erase(order[i]);
    }
}
        for(auto it:m)
        {
            while(it.second--)
                t+=it.first;
        }
        return t;
    }
};