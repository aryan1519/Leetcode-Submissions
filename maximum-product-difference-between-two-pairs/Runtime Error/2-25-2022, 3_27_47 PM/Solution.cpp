// https://leetcode.com/problems/maximum-product-difference-between-two-pairs

#include <climits>

class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        // Method-1 sort and take first two and last two numbers. nlogn time.
        
        int small1 = INT_MAX, small2=INT_MAX, big2= INT_MIN, big1=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<small1)
            {
                small2 = small1;
                small1 = nums[i];
            }

            else if(nums[i]>small1 && nums[i]<small2)
                small2 = nums[i];

            if(nums[i]>big1)
            {
                big2 = big1;
                big1 = nums[i];
            }

            else if(nums[i]<big1 && nums[i]>big2)
                big2 = nums[i];
        }

        return ((big1*big2)-(small1*small2));
    }
};