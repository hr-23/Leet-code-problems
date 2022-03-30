class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            set<int>s(matrix[i].begin(),matrix[i].end());
            if(s.find(target)!=s.end())
                return true;
        }
        return false;
    }
};