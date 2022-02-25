// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        map<char, int> m;
        for(int i=0;i<26;i++)
        {
            m['a'+i] = 0;
        }
        
        for(int i=0;i<sentence.length();i++)
        {
            m[sentence[i]]++;
        }
        
        for(auto i : m)
        {
            if(i.second == 0)
                return false;
        }
        
        return true;
    }
};