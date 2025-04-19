class Solution {
    public:
    
        void helper(vector<int> &vec, TreeNode* root) {
            vec.push_back(root->val);
            if(root->left != nullptr) {
                helper(vec,root->left);
            }
            if(root->right != nullptr) {
                helper(vec,root->right);
            }
    
        }
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int> vec;
            if(root != nullptr) {
                helper(vec, root);
            }
            
            return vec;
        }
    };