class Solution {
public:
    vector<vector<int>> generate(int numRows) {
   vector<vector<int>>v;
        // first analyze the question 
        // you are giving up too fast ,so spend a dedicated time for this and then solve 
        // the approach is that we have to take a 2d vector and then traverse through the no of rows required and create a new vector initialized with 1 and now apply the following algorithm ,recall once ,imagine in mind 
        for(int i=0;i<numRows;i++)
        {
            vector<int>r(i+1,1);
            for(int j=1;j<i;j++)
            {
                r[j]=v[i-1][j]+v[i-1][j-1];
            }
            v.push_back(r);
        }
        return v;
    }
};