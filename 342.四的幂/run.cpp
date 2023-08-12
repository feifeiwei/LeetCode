class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        
        // judging if num of 1 is 1
        if((n & (n-1)) !=0)    return false;

        // judging if the 1 in the odd bit
        int count = 0;
        while(n>1)
        {
            n>>=1;
            count ++;
        }
        return count%2==0;
    }
};
