// https://leetcode.com/problems/subsets-ii

class Solution {
public:
    
    void helper(vector<int>& nums, set<vector<int>> &ans, vector<int> rough, int i)
    {
        if(i == nums.size())
        {
            ans.insert(rough);
            return;
        }
        
        rough.push_back(nums[i]);
        
        helper(nums, ans, rough, i+1);
        
        rough.pop_back();
        
        helper(nums, ans, rough, i+1);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        set<vector<int> > ans;
        
        vector<int> rough;
        
        helper(nums, ans, rough, 0);
        
        std::vector<vector<int>> v;
        std::copy(ans.begin(), ans.end(), std::back_inserter(v));
        
        return v;
    }
};