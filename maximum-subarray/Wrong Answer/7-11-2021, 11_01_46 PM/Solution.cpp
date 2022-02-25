// https://leetcode.com/problems/maximum-subarray

#include <cmath>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        int max_sum = nums[0];
        
        int curr = nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            curr = max(nums[i],curr+nums[i]);
            max_sum = max(curr,max_sum);
        }
        return max_sum;
    }
};