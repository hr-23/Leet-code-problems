class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // first analyze the question 
        // you are giving up too fast ,so spend a dedicated time for this and then solve 
        // the approach is that we have to take a 2d vector and then traverse through the no of rows required and create a new vector initialized with 1 and now apply the following algorithm ,recall once ,imagine in mind 
      vector<vector<int>> ret;
	for (int i = 0; i < numRows; i++) {
		vector<int> row(i + 1, 1);
		for (int j = 1; j < i; j++) {
			row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
		}
		ret.push_back(row);
	}
	return ret;
    }
};