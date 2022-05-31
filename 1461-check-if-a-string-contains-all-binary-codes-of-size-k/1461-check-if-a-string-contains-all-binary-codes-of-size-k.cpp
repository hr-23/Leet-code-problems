class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        if(s.length()==1)
            return false;
        if(k>=s.size())return false;
          for(int i=0;i<=s.length()-k;i++)
        {
            string r=s.substr(i,k);
            st.insert(r);
          //  cout<<r<<"\n";
    }
    
        long long  x=pow(2,k);
      // cout<<st.size()<<"\n";cout<<x<<"\n";
       if(st.size()==x)return true;;
     return false;
    }
};