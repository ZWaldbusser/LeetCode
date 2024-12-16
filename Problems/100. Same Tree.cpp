class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) {
            return true;
        }
        if(p == nullptr || q == nullptr) {
            return false;
        }
        //Check children AREN'T null
        if(p->val != q->val) {
            return false;
        }
        if((p->right == nullptr && q->right == nullptr) && (p->left == nullptr && q->left == nullptr)) {
            return true;
        }
        if((p->right == nullptr && q->right != nullptr) || (p->right != nullptr && q->right == nullptr)) {
            return false;
        }
        if((p->left == nullptr && q->left != nullptr) || (p->left != nullptr && q->left == nullptr)) {
            return false;
        }
        return (isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
    }
};