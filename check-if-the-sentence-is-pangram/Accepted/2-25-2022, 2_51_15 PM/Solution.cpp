// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        int arr[26] = {0};
        
        for(int i=0;i<sentence.length();i++)
        {
            arr[sentence[i]-97]++;
        }
        
        for(auto i:arr)
            if(i == 0)
                return false;
        
        return true;
        
    }
};