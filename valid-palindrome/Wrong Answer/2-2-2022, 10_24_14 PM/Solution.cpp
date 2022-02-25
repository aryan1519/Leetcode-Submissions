// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    
    bool ans(string s, int start, int end)
    {
        if(start>=end)
            return true;
        
        if(s[start] != s[end])
            return false;
        
        return ans(s, ++start, --end);
    }
    
    bool isPalindrome(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);    
        
        string s1 = "";
        
        for(int i = 0; i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                s1+=s[i];
            }
        }
        
        return ans(s1, 0, s1.length()-1);
    }
};