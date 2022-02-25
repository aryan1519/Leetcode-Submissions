// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    

    bool isPalindrome(string s) 
    {
        int start = 0, end = s.length()-1;
        
        while(start<=end)
        {

            if(!iswalnum(s[start]))
                start++;
            
            else if(!iswalnum(s[end]))
                end--;
                    
            else if(tolower(s[start]) != tolower(s[end]))
                return false;
                    
            else
                {
                    start++;
                    end--;
                }
        }
        
        return true;
    }
};