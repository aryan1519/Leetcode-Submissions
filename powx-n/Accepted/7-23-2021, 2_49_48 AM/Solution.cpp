// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans = 1;
        long nn = abs(n);
        while(nn > 0) {
            if((nn&1)==1) 
                ans *= x;
            
            nn >>= 1;
            x *= x;
        }
        
        if(n<0)
            return 1/ans;
        else
            return ans;
    }
};