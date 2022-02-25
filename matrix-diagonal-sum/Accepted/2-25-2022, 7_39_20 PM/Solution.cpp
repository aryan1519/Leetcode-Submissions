// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int primary{};

        for(int i=0;i<mat.size();i++)
        {
          primary+=mat[i][i];
            
          int j = mat[i].size()-i-1;
            
          if(i == j)
            continue;

          primary+=mat[i][j];  
            
        }

        return primary;
    }
};