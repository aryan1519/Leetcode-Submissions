// https://leetcode.com/problems/subsets-ii

class Solution {
public:
    
    void helper(int ind, vector<vector<int>> &ans, vector<int> &rough, vector<int> nums)
    {
        // if(ind == nums.size())
        // {
        ans.push_back(rough);
        //     return;
        // }
        
        for(int i=ind; i<nums.size(); i++)
        {
            if(i>ind && nums[i] == nums[i-1])
                continue;
            
            rough.push_back(nums[i]);
            
            helper(i+1, ans, rough, nums);
            
            rough.pop_back();
        }
        // return;
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans;    
        
        vector<int> rough;
        
        helper(0, ans, rough, nums);
        
        return ans;
    }
};