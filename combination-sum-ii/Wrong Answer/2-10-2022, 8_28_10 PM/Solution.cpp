// https://leetcode.com/problems/combination-sum-ii

class Solution {
public:
    
    void helper(int ind, vector<vector<int>> &ans, vector<int> rough, vector<int>& candidates, int target)
    {
        if(target == 0)
        {    
            ans.push_back(rough);
            return;
        }
        
        for(int i=ind; i<candidates.size()-1; i++)
        {
            if(i>ind && candidates[i] == candidates[i-1])
                continue;
            
            if(candidates[i]>target)
                break;
            
            rough.push_back(candidates[i]);
            
            helper(i+1, ans, rough, candidates, target-candidates[i]);
            
            rough.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        
        vector<int> rough;
        
        helper(0, ans, rough, candidates, target);
        
        return ans;
    }
};