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
        
//         if (preorderLen != inorderLen)
//             return NULL;
        
        int k;
        for(k=0; preorder[0]!=inorder[k];k++);
        
        TreeNode* newNode = new TreeNode(preorder[0]);
        
        vector<int> tmpPreorder1 (preorder.begin()+1, preorder.begin()+1+k);
        vector<int> tmpInorder1  (inorder.begin(), inorder.begin()+k);
        
        newNode->left  = buildTree(tmpPreorder1, tmpInorder1);
        
        vector<int> tmpPreorder2 (preorder.begin()+1+k, preorder.end());
        vector<int> tmpInorder2  (inorder.begin()+k+1,  inorder.end());
        
        newNode->right = buildTree(tmpPreorder2, tmpInorder2);
        
        return newNode;
        
    }    
    
};