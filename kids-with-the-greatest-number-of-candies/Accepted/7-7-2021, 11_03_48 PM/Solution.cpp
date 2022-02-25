// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max{};
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>max)
                max = candies[i];
        }
        
        vector<bool> ans;
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= max)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
    }
};