class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> retval;
        traversal(root, &retval, 0);
        return retval;
    }
    void traversal(TreeNode* root, vector<vector<int>> *array, int level) {
        if (root == nullptr) return;
        if(array->size() == level) {
            vector<int> temp;
            array->push_back(temp);
        }
        (*array)[level].push_back(root->val);

        if(root->left != nullptr) {
            traversal(root->left, array, level+1);
        }
        if(root->right != nullptr) {
            traversal(root->right, array, level+1);
        }
    }
};