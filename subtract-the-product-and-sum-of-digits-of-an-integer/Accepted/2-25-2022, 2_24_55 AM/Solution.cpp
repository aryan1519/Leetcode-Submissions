// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    
    int subtractProductAndSum(int n) 
    {
        int sum{0};
        int product{1};
        
        while(n)
        {

            sum += n%10;
            product*= n%10;
            
            n/=10;
        }
        
        return product-sum;
    }
};