class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      for(int i=0;i<matrix.size();i++)
      {
          for(int j=0;j<matrix[0].size();j++)
          {
              if(i<j)
              swap(matrix[j][i],matrix[i][j]);
          }
      }
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};