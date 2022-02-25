// https://leetcode.com/problems/permutations-ii

class Solution {
public:
    
    void helper(int ind, vector<vector<int>> &ans, vector<int> nums)
    {
        if(ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i = ind; i<nums.size();i++)
        {
            if(i!=ind && nums[i] == nums[ind])
                continue;
            
            swap(nums[ind], nums[i]);
            
            helper(ind+1, ans, nums);
            
            swap(nums[ind], nums[i]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        helper(0, ans, nums);
        
        return ans;
        
    }
};