// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
//      // int ans = nums[0];
//      int curr = nums[0];
//      while(1)
//      {
//          // curr = ans;
//          curr = nums[abs(curr)];
         
//          if(curr<0)
//              return abs(curr);
//          else
//             nums[abs(curr)]*=(-1);
//      } 
            for(int i = 0; i < nums.size(); i++) {
            // int index = abs(nums[i]) - 1;
            
            // mark as visited
            nums[abs(nums[i])] *= -1;
            // incase of duplicate, this will become +ve 
            if(nums[abs(nums[i])] > 0)
                return abs(nums[i]);
        }    
        return -1;
        
    }
};