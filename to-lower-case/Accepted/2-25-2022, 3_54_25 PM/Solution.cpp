// https://leetcode.com/problems/to-lower-case

class Solution {
public:
    string toLowerCase(string s) 
    {
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]>=65 && s[i]<=90)
//             {
//              s[i] = char(s[i]-'A'+97);   
//             }
//         }
//         return s;
        
        
        for(auto& c:s)
            if(c>='A' && c<='Z')
                c+='a'-'A';
        return s;
    }
};