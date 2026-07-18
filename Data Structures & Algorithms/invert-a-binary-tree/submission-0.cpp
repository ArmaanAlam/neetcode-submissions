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

    TreeNode* invert(TreeNode *root){

        if(root == NULL){
            return NULL;
        }

        TreeNode* leftSubtree = invert(root->right);
        TreeNode* rightSubtree = invert(root->left);

        root->left = leftSubtree;
        root->right = rightSubtree;

        return root;
    }

public:
    TreeNode* invertTree(TreeNode* root) {
        return invert(root);
    }
};
