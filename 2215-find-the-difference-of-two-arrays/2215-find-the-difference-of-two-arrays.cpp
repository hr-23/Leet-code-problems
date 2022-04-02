class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v(2);   //here decalre the size too because it may cause you runtime error so always decalre the size if you know ;
        unordered_set<int>sa(nums1.begin(),nums1.end()),sb(nums2.begin(),nums2.end());
        for(auto it:sa)
            if(sb.count(it)==0)v[0].push_back(it);
        for(auto it:sb)
        if(sa.count(it)==0)v[1].push_back(it);
        return v;
    }
};