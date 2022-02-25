// https://leetcode.com/problems/decode-xored-array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> arr;
        arr.push_back(first);
        
        for(auto i : encoded)
        {
            int back = arr.back();
            
            arr.push_back(back^i);
        }
        
        return arr;
    }
};