/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int explore(struct TreeNode *root, int *res)
{
  if (root == NULL)
    return 0;

  int l = explore(root->left, res);
  int r = explore(root->right, res);
  *res += abs(l - r);

  return l + r + root->val;
}

int findTilt(struct TreeNode *root)
{
  int res = 0;
  explore(root, &res);
  return res;
}