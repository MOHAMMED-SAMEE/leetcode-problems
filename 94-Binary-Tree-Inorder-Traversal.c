

int  cnt = 0;
int test(struct TreeNode* root, int* returnSize){
    if(!root){return 0;}
    cnt++;
    test(root->left, returnSize);
    test(root->right, returnSize);
    return cnt;
}
void fun(struct TreeNode* root, int* ret){
    if(!root){return;}
    fun(root->left, ret);
    ret[cnt++] = root->val;
    fun(root->right, ret);
    return;
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ret =NULL;
    cnt = test(root, returnSize);
    ret = (int*)calloc(cnt,sizeof(int));
    cnt = 0;
    fun(root, ret);
    *returnSize = cnt;
    cnt = 0;
    return ret;
}