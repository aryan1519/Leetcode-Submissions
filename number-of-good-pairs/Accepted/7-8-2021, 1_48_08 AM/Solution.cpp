// https://leetcode.com/problems/number-of-good-pairs

#include <map>

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int count{};
        
        map<int,int> m;

        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for (auto x : m)
            {
                int n = x.second ;
                count+=((n*(n-1))/2);
            }
        
        return count;
    }
    
};