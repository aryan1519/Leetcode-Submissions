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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int preorderLen = preorder.size();
        int inorderLen  = inorder.size();
        
        if (preorderLen <= 0 || inorderLen <= 0)
            return NULL;
        
        int rootIndex;
        
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i] == preorder[0])
            {
                rootIndex = i;
                break;
            }
        }
        
        TreeNode* newNode = new TreeNode(preorder[0]);
        
        vector<int> leftPreorder (preorder.begin()+1, preorder.begin()+1+rootIndex);
        vector<int> leftInorder  (inorder.begin(), inorder.begin()+rootIndex);
        
        newNode->left  = buildTree(leftPreorder, leftInorder);
        
        vector<int> rightPreorder (preorder.begin()+1+rootIndex, preorder.end());
        vector<int> rightInorder  (inorder.begin()+rootIndex+1,  inorder.end());
        
        newNode->right = buildTree(rightPreorder, rightInorder);
        
        return newNode;
        
    }    
    
};