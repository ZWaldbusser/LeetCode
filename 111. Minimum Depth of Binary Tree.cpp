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
    int getDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        if(root->right == nullptr && root->left == nullptr) {
            return 1;
        }
        int L = 999999;
        int R = 999999;
        if(root->right != nullptr) {
            R = getDepth(root->right);
        }
        if(root->left != nullptr) {
            L = getDepth(root->left);
        }
        return min(L, R) + 1;
    }
    int minDepth(TreeNode* root) {
        return getDepth(root);
    }
};