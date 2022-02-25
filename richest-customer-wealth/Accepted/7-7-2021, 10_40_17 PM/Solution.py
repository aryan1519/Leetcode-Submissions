// https://leetcode.com/problems/richest-customer-wealth

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_sum = 0 ;
        
        for i in accounts:
            
            sum = 0
            for j in i:
                sum+=j
            
            if sum>max_sum:
                max_sum = sum
        return max_sum