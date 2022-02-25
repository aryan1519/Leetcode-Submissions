// https://leetcode.com/problems/replace-all-digits-with-characters

class Solution {
public:
    string replaceDigits(string s) 
    {
        for(int i=1;i<s.size();i+=2)
        {
            s[i] = char(s[i-1]+(s[i]-48));
            
            // s[i] = char(s[i-1] + s[i] - '0');
        }
        return s;
    }
};