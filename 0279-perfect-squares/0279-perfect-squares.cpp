class Solution {
public:
    vector<int> records;
    int numSquares(int n) {
        
        vector<int> perfect_squares;
        for (int value = 1; value <= 100; value++){
            int sq = value * value;
            if (sq > n) break;
            
            perfect_squares.push_back(sq);
        }
        this->records = vector<int>(n + 1, -1);
        return helper(perfect_squares, n);
    }
    
    long helper(vector<int>& perfect_squares, int target){
        
        if (target == 0){
            return 0;
        }
        if (target < 0){
            return INT_MAX;
        }
        if (this->records[target] != -1){
            return this->records[target];
        }
        
        long sub, result = target;
        for (int& value: perfect_squares){
            sub = 1 + helper(perfect_squares, target - value);
            result = min(result, sub);
        }
        
        this->records[target] = result;
        return result;
    }
};