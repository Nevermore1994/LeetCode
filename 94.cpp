vector<int> solve(TreeNode* root){
    vector<int> res;
    if(!root)
        return res;
    stack<TreeNode*>  s;
    while(!s.empty() || root)
    {
        if(root->left)
        {
            s.push(root);
            root = root->left;
        }
        else
        {
            auto p = s.top();
            s.pop();

            res.push_back(p->val);
            root = p->right;
        }
    }   
    return res;
} 

       vector<int> res;
        stack<TreeNode*> s;
        while(!s.empty() || root)
        {
            if(root)
            {
                s.push(root);
                root = root->left;
            }
            else
            {
                auto p = s.top();
                s.pop();
                res.push_back(p->val);
                root = p->right;
            }
        }
        return res;

