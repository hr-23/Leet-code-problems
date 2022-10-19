class Solution {
public:
   static  int cb(int a)
    {
        int cnt=0;
        while(a)
        {
            a=a&(a-1);
            cnt++;
        }
        return cnt;
    }
  static  bool  cmp(int a,int b)
    {
        int p=cb(a);
       int q=cb(b);
       if(p==q)return a<=b;
       else return p<q;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};