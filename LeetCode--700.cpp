
//利用二叉搜索树的性质 递归即可
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr)
            return root;
        if(root->val == val)
            return root;
        if(root->val > val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
    }
};
