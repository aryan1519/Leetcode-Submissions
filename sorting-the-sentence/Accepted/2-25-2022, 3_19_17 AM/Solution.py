// https://leetcode.com/problems/sorting-the-sentence

class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        l = s.split(" ")
        
        d = {}
        
        for i in l:
            pos = int(i[-1])
            
            d[pos] = i[0:-1]
            
            
        ans = ""
            
        for i in range(1, len(l)):
            ans= ans+d[i]+" "
            
        ans+=d[len(l)]
            
        return ans
            
            
            
            
        