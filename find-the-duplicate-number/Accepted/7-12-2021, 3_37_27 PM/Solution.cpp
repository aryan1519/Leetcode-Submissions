// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
     int ans = nums[0];
     int curr = 0;
     while(1)
     {
         curr = ans;
         ans = nums[abs(curr)];
         
         if(ans<0)
             return abs(curr);
         
         nums[abs(curr)]*=(-1);
     }   
        
    }
};