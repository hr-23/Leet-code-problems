class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
// the optimal approach for this question will be to use the first row and first coloumn as to set the row and coloumn to zero if an element found is 0 
// we use bool to check whether the row and coloumn element became zero or not and then if true then we will set all elements to 0 
        bool row = false, col = false;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0) {
                    if(i == 0) row = true;
                    if(j == 0) col = true;
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
        if(col){
            for(int i = 0; i < matrix.size(); i++) matrix[i][0] = 0;
        }
        if(row){
            for(int j = 0; j < matrix[0].size(); j++) matrix[0][j] = 0;
        }
    }
};