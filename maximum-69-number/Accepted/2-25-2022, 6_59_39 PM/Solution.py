// https://leetcode.com/problems/maximum-69-number

class Solution(object):
    def maximum69Number (self, num):
        """
        :type num: int
        :rtype: int
        """
        
        s = str(num)

        for i in range(len(s)):
            if(s[i] == '6'):
                s = s[:i] + '9' + s[i + 1:]
                return s
        
        return s
            
        