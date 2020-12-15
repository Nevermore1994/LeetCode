vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
    vector<TreeNode*> res;
    if(!root)
        return res;
    solve(root, to_delete);
    solve(root, res);
    if(root->val != 1001)
    {
        res.push_back(root);
    }
    return res;
}

void solve(TreeNode* root,  vector<int>& to_delete)
{
    if(!root || to_delete.empty())
        return;
    auto it = find(to_delete.begin(), to_delete.end(), root->val);
    if(it != to_delete.end())
    {
        root->val = 1001;
        int pos = distance(to_delete.begin(), it);
        swap(to_delete[pos], to_delete[to_delete.size() - 1]);
        to_delete.pop_back();
    }
    solve(root->left, to_delete);
    solve(root->right, to_delete);
}

void solve(TreeNode* root,  vector<TreeNode*>& res)
{
    if(!root)
        return;
    if(root->left)
    {
        solve(root->left, res);
        if(root->left->val == 1001)
            root->left = nullptr;
    }
    if(root->right)
    {
        solve(root->right, res); 
        if(root->right->val == 1001)
            root->right = nullptr;
    }

    if(root->val == 1001)
    {
        if(root->left)
            res.push_back(root->left);
        if(root->right)
            res.push_back(root->right); 
    }
}