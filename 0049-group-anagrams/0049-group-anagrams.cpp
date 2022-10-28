class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> t;
        unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string h=strs[i];
            sort(h.begin(),h.end());
            m[h].push_back(strs[i]);
            
        }
       for(auto m1:m){
           t.push_back(m1.second);
       }
        return t;
    }
};