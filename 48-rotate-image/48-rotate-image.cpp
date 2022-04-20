class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // the commoon methodology for nxn matrix traversals are as follows for clockwise and anti clockwise directions 
        // for clockwise direction reverse the matrix from bottom to top and then symmetrically swap them 
        //for anti clockwise direction reverse the matrix from left to right and then symmetrically swap them 
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
            for(int j=i+1;j<matrix[0].size();j++)
                swap(matrix[i][j],matrix[j][i]);
        return;
    }
};