// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    
    bool ans(string s, int start, int end)
    {
//         if(start>=end)
//             return true;
        
//         if(s[start] != s[end])
//             return false;
        
//         return ans(s, ++start, --end);
        
        
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
    
    bool isPalindrome(string s) 
    {
        
//         string s1 = "";
        
//         // for(int i = 0; i<s.length();i++)
//         // {
//         //     if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//         //     {
//         //         s1+=s[i];
//         //     }
//         // }
        
//         // transform(s.begin(), s.end(), s.begin(), ::tolower);   
        
//         for(int i = 0;i<s.length();i++)
//         {
//             if(iswalnum(s[i]))
//                 s1+= tolower(s[i]);
//         }
        
        return ans(s, 0, s.length()-1);
    }
};