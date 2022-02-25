// https://leetcode.com/problems/combination-sum

class Solution {
public:
    
    
    void helper(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> rough, int i)
    {
        if(i == candidates.size())
        {
            if(target == 0)
            {
                ans.push_back(rough);
            }
            
            return;
        }
        
        if(candidates[i]<=target)
        {
            rough.push_back(candidates[i]);

            helper(candidates, target-candidates[i], ans, rough, i);

            rough.pop_back();
        }
        
        helper(candidates, target, ans, rough, i+1);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        
        vector<int> rough;
        
        helper(candidates, target, ans, rough, 0);
        
        return ans;
    }
};