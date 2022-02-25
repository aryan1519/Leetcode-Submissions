// https://leetcode.com/problems/maximum-subarray

#include <cmath>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        int max_sum = nums[0];
        
        int curr = 0;
        
        for(int val : nums)
        {
            curr = max(val,curr+val);
            max_sum = max(curr,max_sum);
        }
        return max_sum;
    }
};