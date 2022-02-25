// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    

    bool isPalindrome(string s) 
    {
        int start = 0, end = s.length()-1;
        
        while(start<=end)
        {
            if(iswalnum(s[start]) && iswalnum(tolower(s[end])))
                        {
                            if(tolower(s[start]) != tolower(s[end]))
                                return false;
                            else
                            {
                                start++;
                                end--;
                            }
                               
                        }
            else if(!iswalnum(s[start]) && iswalnum(s[end]))
                    {
                        start++;
                    }
            
            else if(!iswalnum(s[end]) && iswalnum(s[start]))
                    {
                        end--;
                    }
            else
                    {
                        start++;
                        end--;
                    }
        }
        
        return true;
    }
};