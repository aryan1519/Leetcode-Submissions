// https://leetcode.com/problems/subsets

class Solution {
public:
    
    void help(int i, vector<vector<int>> &ans, vector<int> &rough, vector<int>nums, int n)
    {
        if(i == n)
        {
            ans.push_back(rough);
            return;
        }
        
        rough.push_back(nums[i]);
        
        help(i+1,ans,rough,nums,n);
        
        rough.pop_back();
        
        help(i+1,ans,rough,nums,n);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<vector<int>> ans;
        vector<int> rough;
        
        help(0,ans,rough,nums,n);
        
        return ans;
        
    }
};