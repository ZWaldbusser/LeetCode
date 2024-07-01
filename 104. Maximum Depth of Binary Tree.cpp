class Solution {
public:
    //When doing Minimum Depth problem, having not fully read the question (and a brain-fart), This was my original solution.
    int getDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        if(root->right == nullptr && root->left == nullptr) {
            return 1;
        }
        int L = 0;
        int R = 0;
        if(root->right != nullptr) {
            R = getDepth(root->right);
        }
        if(root->left != nullptr) {
            L = getDepth(root->left);
        }
        return max(L, R) + 1;
    }
    int maxDepth(TreeNode* root) {
        return getDepth(root);
    }
};