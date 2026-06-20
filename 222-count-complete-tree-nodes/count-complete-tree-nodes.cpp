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
    int c=0;
    int fun(TreeNode*node){
        if(node) c++;
        if(node->left) fun(node->left);
        if(node->right) fun(node->right);
       
       return c;
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        fun(root);
        return c;
    }
};