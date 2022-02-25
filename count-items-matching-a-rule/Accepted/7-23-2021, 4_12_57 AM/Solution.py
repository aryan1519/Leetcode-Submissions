// https://leetcode.com/problems/count-items-matching-a-rule

class Solution(object):
    def countMatches(self, items, ruleKey, ruleValue):
        """
        :type items: List[List[str]]
        :type ruleKey: str
        :type ruleValue: str
        :rtype: int
        """
        c = 0
        
        for l in items:
            if (ruleValue == l[0]  and ruleKey == "type"):
                c+=1
            elif(ruleValue == l[1]  and ruleKey == "color"):
                c+=1
            elif(ruleValue == l[2]  and ruleKey == "name"):
                c+=1
                
        return c
                