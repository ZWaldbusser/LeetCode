class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int retVal = 0;
        sumLeaves(retVal, root, false);
        return retVal;
    }
    void sumLeaves(int &retVal, TreeNode* root, bool isLeft) {
        
        if(root == nullptr) {
            return;
        }
        if(root->left == nullptr && root->right == nullptr && isLeft) {
            retVal += root->val;
            return;
        }
        sumLeaves(retVal, root->left, true);
        sumLeaves(retVal, root->right, false);

    }
};