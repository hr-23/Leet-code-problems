class Solution {
public:
    int pivotIndex(vector<int>& v) {
        for(int i=0;i<v.size();i++)
        {
            int s1=accumulate(v.begin(),v.begin()+i,0);
            int s2=accumulate(v.begin()+i+1,v.end(),0);
            if(s1==s2)
                return i;
        }
        return -1;
    }
};