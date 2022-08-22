class Solution {
public:
    bool isPowerOfFour(int num) {
        // first if the number is negative return false 
        // and we know that for checking the power of two ,we do the bitwise operaio n of n&n-1 so that if it is a power of two it becomes 0 
    // and if it is power of four , it must also be power of two m and for power of four , the power-1 is divisible by 3 , once analyze 
             
        return num>0 && (num&(num-1))==0 && (num-1)%3==0;
    }
};