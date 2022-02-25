// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        string cpy = s;
        
        for(int i=0;i<s.length();i++)
        {
            cpy[indices[i]] = s[i];
        }
        
        return cpy;
    }
};