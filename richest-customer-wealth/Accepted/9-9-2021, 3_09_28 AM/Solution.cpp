// https://leetcode.com/problems/richest-customer-wealth

#include <climits>
#include <cmath>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int m = INT_MIN;
        
        for(int i=0;i<accounts.size();i++)
        {
            int sum = 0;
            
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
         
            m = max(sum,m);
        }
        return m;
    }
};