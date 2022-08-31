class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st(allowed.begin(),allowed.end());
        int c=0;
        for(int i=0;i<words.size();i++)
        {
            int ans=0;
            for(int j=0;j<words[i].length();j++)
            {
                if(st.find(words[i][j])!=st.end())
                    ans++;
            }
               if(ans==words[i].length())
                   c++;
        }
        return c;
    }
};