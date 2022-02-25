// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        vector<int> ans(2);

        int xors{};
        
        for(auto num:nums)
        {
            xors^=num;
        }
        
        int xor_neg = xors&(-xors);
        
        for(auto num:nums)
        {
            if((num & xor_neg) == 0)
                ans[0]^=num;
            else
                ans[1]^=num;
        }
        
        return ans;
    }
};