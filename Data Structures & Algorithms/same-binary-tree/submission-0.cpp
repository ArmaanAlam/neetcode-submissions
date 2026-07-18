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

    bool traversal(TreeNode* node1, TreeNode* node2){

        if(node1 == NULL && node2 == NULL){
            return true;
        }
        else if(node1 == NULL && node2 != NULL){
            return false;
        }
        else if(node2 == NULL && node1 != NULL){
            return false;
        }

        if(node1->val != node2->val) return false;

        bool left = traversal(node1->left, node2->left);
        bool right = traversal(node1->right, node2->right);

        return left && right;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return traversal(p, q);
    }
};
