// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int n = nums.size()-1;
        
        int sum = (n*(n+1))/2;
        
        int v_sum{};
        
        for(int i=0;i<nums.size();i++)
        {
            v_sum+=nums[i];
        }
        
        return v_sum-sum;
    }
};