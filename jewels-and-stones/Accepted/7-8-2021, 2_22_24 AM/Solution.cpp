// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string j, string s) 
    {
      int count = 0;
     for(int i=0;i<s.length();i++){
        if (j.find(s[i]) != std::string::npos)
            count++;
     }
        return count;     
//     map<char,int> m;
        
//     for(int i=0;i<stones.length();i++)
//         {
//             m[stones[i]]++;
//         }
        
//     int count{};
        
//     for(auto x : m)
//     {
//         if(jewels.find(x.first)<jewels.length())
//         {
//             count+=x.second;
//         }
//     }
    
//     return count;
        
        
    }
};