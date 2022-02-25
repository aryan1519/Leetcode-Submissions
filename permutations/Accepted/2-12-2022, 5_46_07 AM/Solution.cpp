// https://leetcode.com/problems/permutations

class Solution {
public:
    
    void helper(vector<vector<int>> &ans, vector<int> rough, int *arr, vector<int> nums)
    {
        if(rough.size() == nums.size())
        {
            ans.push_back(rough);
            return;
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(arr[i] != 1)
            {
                rough.push_back(nums[i]);
                
                arr[i] = 1;
                
                helper(ans, rough, arr, nums);
                
                rough.pop_back();
                
                arr[i] = 0;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        
        vector<int> rough;
        
        int arr[nums.size()];
        
        for(int i=0;i<nums.size();i++)
        {
            arr[i] = 0;
        }
        
        helper(ans, rough, arr, nums);
        
        return ans;
    }
};