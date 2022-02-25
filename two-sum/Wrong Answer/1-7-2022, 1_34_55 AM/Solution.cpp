// https://leetcode.com/problems/two-sum

#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> m;
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]] = i;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            int p = target-nums[i];
            if(m.count(p) != 0)
            {
                ans.push_back(i);
                ans.push_back(m[p]);
                return ans;
            }
        }    
        return ans;
    
    }
};