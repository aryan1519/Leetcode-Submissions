// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int getIndex(vector<int>& arr,int s,int e,int x)
    {


      int i = 0;
      for(i=s;i<=e;i++)
      {
        if(arr[i] == x)
          break;
      }
        return i;
    }
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int start,int end)
    {
      static int i = 0;

      if(start>end)
        return NULL;

      int rootData = preorder[i];
      i++;

      TreeNode*  root  = new TreeNode(rootData);

      if(start == end)
          return root;
        
      int rootIndex = getIndex(inorder,start,end,rootData);

      root->left = helper(preorder,inorder,start,rootIndex-1);
      root->right = helper(preorder,inorder,rootIndex+1,end);

      return root;    
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        
        return helper(preorder,inorder,0,inorder.size()-1);
        
    }
};