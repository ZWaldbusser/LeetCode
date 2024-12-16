class Solution {
public:

    bool pathFinder(TreeNode* root, int targetSum, int x) {
        if(root == nullptr) {
            return false;
        }
        if(targetSum == (x + root->val) && (root->left == nullptr) && (root->right == nullptr)) {
            return true;
        }
        bool left = false;
        bool right = false;
        if(root->left != nullptr) {
            left = pathFinder(root->left, targetSum, x+root->val);
        }
        if(root->right != nullptr) {
            right = pathFinder(root->right, targetSum, x+root->val);
        }
        return (left || right);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathFinder(root, targetSum, 0);
    }
};