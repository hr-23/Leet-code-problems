class Solution {
public:
    int hammingWeight(uint32_t n) {
        int k=__builtin_popcount(n);
        return k;
    }
};