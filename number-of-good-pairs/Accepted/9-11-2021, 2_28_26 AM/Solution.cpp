// https://leetcode.com/problems/number-of-good-pairs

#include <map>

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        int count = 0;
            
        for ( auto it = m.begin(); it != m.end(); ++it  )
        {
           int n = it->second;
           if( n>1)
           {
               count+= ((n*(n-1))/2);
           }
        } 
        return count;
    }
};