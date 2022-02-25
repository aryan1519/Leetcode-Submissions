// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        
    map<char,int> m;
        
    for(int i=0;i<stones.length();i++)
        {
            m[stones[i]]++;
        }
        
    int count{};
        
    for(auto x : m)
    {
        if(jewels.find(x.first)<jewels.length())
        {
            count+=x.second;
        }
    }
    
    return count;
        
        
    }
};