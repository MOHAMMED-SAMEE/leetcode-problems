
bool isUnivalTree(struct TreeNode* root) {
    if(root==NULL || root->right==NULL && root->left==NULL)
       return 1;
    if(root->right && root->right->val!=root->val)
       return 0;
    if(root->left && root->left->val!=root->val)
       return 0;
    return isUnivalTree(root->left) && isUnivalTree(root->right); 
}