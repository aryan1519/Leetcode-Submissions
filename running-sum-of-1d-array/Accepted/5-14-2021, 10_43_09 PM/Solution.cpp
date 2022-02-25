// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int size = nums.size();
        
        for(int i=1;i<size;i++)
        {
            nums[i] = nums[i-1]+nums[i];
        }
     
        return nums;
    }
};