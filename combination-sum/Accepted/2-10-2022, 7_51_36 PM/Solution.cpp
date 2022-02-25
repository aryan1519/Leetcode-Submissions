// https://leetcode.com/problems/combination-sum

class Solution {
public:
    
    void helper(int i, vector<vector<int>> &ans, vector<int> rough, vector<int>& candidates, int target)
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

            helper(i, ans, rough, candidates, target-candidates[i]);

            rough.pop_back();
        }
        
        helper(i+1, ans, rough, candidates, target);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        
        vector<int> rough;
        
        helper(0, ans, rough,candidates, target);
        
        return ans;
    }
};