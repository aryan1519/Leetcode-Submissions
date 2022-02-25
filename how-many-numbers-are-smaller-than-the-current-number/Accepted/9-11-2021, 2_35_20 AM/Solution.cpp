// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            int count{};
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                
                if(nums[i]>nums[j])
                    count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};