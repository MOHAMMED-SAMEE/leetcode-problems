/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int min(int a,int b){
    int m = a>b ? b:a;
    return m;
}

int minDepth(struct TreeNode* root){
    if(!root) return 0;

    if(!root->left && !root->right) return 1;
    else if(!root->left) return(1 + minDepth(root->right));
    else if(!root->right) return(1 + minDepth(root->left));
    else return(1 + min(minDepth(root->right),minDepth(root->left)));

}