// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    
    int helper(int i, vector<int>& nums, int k, int sum)
    {
        if(i == nums.size())
        {
            if(sum == k)
                return 1;
            else
                return 0;
        }
        
        sum += nums[i];
        
        int l = helper(i+1, nums, k, sum);
        
        sum -= nums[i];
        
        int r = helper(i+1, nums, k, sum);
        
        return l+r;
    }
    
    int subarraySum(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        
        int sum = 0;
        int i = 0;
        return helper(i,nums,k,sum);
    }
};