// https://leetcode.com/problems/maximum-product-difference-between-two-pairs

class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
//         map<int,vector<int>> m;
        
//         for(i=0; i<nums.size(); i++)
//         {
//             m[nums[i]].push_back(i);
//         }
        
        sort(nums.begin(), nums.end());
        
//         int product1 = nums[0]*nums[1];
        
        int size = nums.size();
        
//         int product2 = nums[size-1]*nums[size-2];
        
        return ((nums[size-1]*nums[size-2])-(nums[0]*nums[1]));
    }
};