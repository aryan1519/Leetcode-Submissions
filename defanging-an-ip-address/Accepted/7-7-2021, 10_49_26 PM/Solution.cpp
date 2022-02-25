// https://leetcode.com/problems/defanging-an-ip-address

#include <string.h>
#include <cstring>
class Solution {
public:
    string defangIPaddr(string address)
    {
     if(address.length() == 0)
         return "";
     
     string s = defangIPaddr(address.substr(1));
         
     if(address[0] == '.')
     {
        return "[.]"+s; 
     }
     else
     {
         return address[0]+s;
     }
            
    }
};