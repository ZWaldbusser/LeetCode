class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> retVal;
        finder(root, retVal, 0);
        sort(retVal.begin(), retVal.end(), greater<>());

        if(k > retVal.size()){
            return -1;
        } else {
            return retVal[k-1];
        }
    }
    void finder(TreeNode* root, vector<long long> &retVal, int level){
        if(retVal.size() <= level) {
            retVal.push_back(root->val);
        } else {
            retVal[level] += root->val;
        }
        if(root->right != nullptr) {
            finder(root->right, retVal, level+1);
        }
        if(root->left != nullptr) {
            finder(root->left, retVal, level+1);
        }
    }
 
};