// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans{1};
        if(n>0)
        {
            for(int i = 0;i<n;i++)
            {
                ans*=x;
            }
            return ans;
        }
        else if(n<0)
        {
           for(int i = 0;i<abs(n);i++)
            {
                ans/=x;
            }
            return ans; 
        }
        else
            return 1;


    }
};