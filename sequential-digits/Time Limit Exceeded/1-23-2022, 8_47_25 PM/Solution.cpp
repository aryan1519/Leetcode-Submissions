// https://leetcode.com/problems/sequential-digits

class Solution {
public:
    
    bool check(int n)
    {
        int last_dig = n%10;
        n/=10;
        
        while(n!=0)
        {
            int curr = n%10;
            
            if(curr != last_dig-1)
                return false;
            
            last_dig = curr;
            n/=10;
        }
        return true;
    }
    
    vector<int> sequentialDigits(int low, int high) 
    {
        
        vector<int> ans;
        
        for(int i=low;i<=high;i++)
        {
            if(check(i) == 1)
                ans.push_back(i);
        }
        
        return ans;
    }
};