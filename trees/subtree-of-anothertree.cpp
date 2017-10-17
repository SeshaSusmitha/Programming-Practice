/* Program URL : https://leetcode.com/problems/subtree-of-another-tree/description/ */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        /* If the subtree is NULL, return true as an empty tree is a subtree of another tree */
        if(t == NULL)
            return true;
        /* If the full tree s is NULL, return false */
        if(s == NULL)
            return false;
        if(areIdentical(s, t))
            return true;
        
        return isSubtree(s->left, t) || isSubtree(s->right, t);
        
    }
    
    bool areIdentical(TreeNode *root1, TreeNode * root2){
        if(root1 == NULL & root2 == NULL)
            return true;
        if(root1 == NULL || root2 == NULL)
            return false;
        
        if((root1->val == root2->val) && areIdentical(root1->left, root2->left) && areIdentical(root1->right, root2->right))
           return true;
        else
           return false;
    }
};