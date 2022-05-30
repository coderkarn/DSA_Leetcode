class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==1<<31 && divisor==-1 )
            return INT_MAX;
        return dividend/divisor;
    }
};