// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string str) 
    {
        stack<char> s;
        
        for(auto& c: str)
        {
            if(c == '(' || c == '{' || c == '[')
            {
                s.push(c);
            }
            
            else if( c == ')')
            {
                if(s.top() == '(')
                    s.pop();
                else
                    return false;
            }
            else if( c == '}')
            {
                if(s.top() == '{')
                    s.pop();
                else
                    return false;
            }
            else if( c == ']')
            {
                if(s.top() == '[')
                    s.pop();
                else
                    return false;
            }
        }
        
        if(s.empty())
            return true;
        else 
            return false;
            
    }
};