class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root->left == nullptr && root->right == nullptr) {
            int val = root->val;
            if(val >= low && high >= val) {
                return root->val;
            } else {
                return 0;
            }
        } else if(root->left == nullptr) {
            //root has a right child
            int val = root->val;
            if(val >= low && high >= val) {
                return root->val + rangeSumBST(root->right, low, high);
            } else {
                return rangeSumBST(root->right, low, high);
            }
        } else if(root->right == nullptr) {
            //root has a left child
            int val = root->val;
            if(val >= low && high >= val) {
                return root->val + rangeSumBST(root->left, low, high);
            } else {
                return rangeSumBST(root->left, low, high);
            }
        } else {
            //root has both children
            int val = root->val;
            if(val >= low && high >= val) {
                return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
            } else {
                return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
            }
        }
    }
};