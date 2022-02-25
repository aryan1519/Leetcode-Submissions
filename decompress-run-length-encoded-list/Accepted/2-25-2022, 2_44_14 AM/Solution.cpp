// https://leetcode.com/problems/decompress-run-length-encoded-list

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i+=2)
        {
            int times = nums[i];
            
            int number = nums[i+1];
            
            for(int j=0;j<times;j++)
            {
                ans.push_back(number);
            }
        }
        
        return ans;
    }
};