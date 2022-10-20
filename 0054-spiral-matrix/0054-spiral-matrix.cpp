class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1,top=0,bottom=n-1;
        int dir=1;
        vector<int>v;
        while(top<=bottom && left<=right)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                    v.push_back(matrix[top][i]);
                dir=2;
                top++;
            }
            else if(dir==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    v.push_back(matrix[i][right]);
                }
                dir=3;
                right--;
            }
            else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[bottom][i]);
                }
                bottom--;dir=4;
            }
            else if(dir==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                left++;dir=1;
            }
        }
        return v;
    }
};