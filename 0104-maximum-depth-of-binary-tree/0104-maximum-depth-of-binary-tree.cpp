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
    int helper(TreeNode * root, int x){
        if(!root){
            return x;
        }
        int res = max(helper(root->left, x+1), helper(root->right, x+1));
        return res;
    }
    
    int maxDepth(TreeNode* root) {
        return helper(root, 0);
    }
};