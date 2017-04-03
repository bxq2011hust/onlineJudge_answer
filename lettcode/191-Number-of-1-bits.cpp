/*
https://leetcode.com/problems/number-of-1-bits/#/description

*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=0;
        while(n!=0)
        {
            ++i;
            n&=(n-1);
        }
        return i;
    }
};
