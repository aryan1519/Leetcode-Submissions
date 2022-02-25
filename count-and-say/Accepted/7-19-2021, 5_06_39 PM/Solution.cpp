// https://leetcode.com/problems/count-and-say

class Solution {
public:
    
string interpret(string s)
{
    string ans = "";

    int count = 1;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == s[i+1])
            count++;
        else
        {
            ans = ans+to_string(count)+s[i];
            count=1;
        }
    }
    return ans;
}

string countAndSay(int n)
{
    if(n==1)
        return "1";

    string s = countAndSay(n-1);

    return interpret(s);
}
};