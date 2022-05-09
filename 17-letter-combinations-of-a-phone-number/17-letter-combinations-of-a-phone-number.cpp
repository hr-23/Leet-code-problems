class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
		vector<string> res;
        res.push_back("");
        
        for(auto it: digits) {  
            vector<string> tmp;
            for(auto it1: pad[it - '0']) { 
                for(auto s: res) {
                    tmp.push_back(s + it1);
                }
            }
            res.swap(tmp);
        }
        return res;
    }
};



