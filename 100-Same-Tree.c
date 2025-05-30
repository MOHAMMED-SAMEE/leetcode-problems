bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q)    return true;
    if(!p || !q)    return false;
    return (p->val == q->val && isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
}