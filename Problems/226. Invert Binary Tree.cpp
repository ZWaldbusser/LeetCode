class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {
            return nullptr;
        }
        TreeNode* temp = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(temp);
        return root;
    }
};