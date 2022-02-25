// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        lengths = []
        
        for i in sentences:
            
            l = i.split(" ")
            
            lengths.append(len(l))
            
        return max(lengths)
            