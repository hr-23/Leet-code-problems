class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=INT_MIN;
        for(auto it:sentences)
        {
           int res=count(it.begin(),it.end(),' ');
            c=max(c,res+1);
        }
        return c;
    }
};