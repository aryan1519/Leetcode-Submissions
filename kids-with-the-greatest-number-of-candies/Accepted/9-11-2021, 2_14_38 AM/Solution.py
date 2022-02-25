// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        ans = []
        
        for i in candies:
            if i+extraCandies>=max(candies):
                ans.append(True)
            else:
                ans.append(False)
                
        return ans
        