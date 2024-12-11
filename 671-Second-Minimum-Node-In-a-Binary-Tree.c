/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int count_nodes(struct TreeNode * root)
{
    if(root)
    {
        int lcount = count_nodes(root->left);
        int rcount = count_nodes(root->right);
        return (lcount + rcount + 1);
    }
    return 0;
}

void traversal(struct TreeNode * root, int * tmp_arr, int * tmp_arr_index)
{
    if(root)
    {
        if(root->left && root->right)
        {
            tmp_arr[*tmp_arr_index] = ((root->left->val <= root->right->val) ? root->left->val : root->right->val);
            *tmp_arr_index += 1;
        }
        else
        {
            tmp_arr[*tmp_arr_index] = root->val;
            *tmp_arr_index += 1;
        }
        
        traversal(root->left, tmp_arr, tmp_arr_index);
        traversal(root->right, tmp_arr, tmp_arr_index);
    }
}

int findSecondMinimumValue(struct TreeNode* root) 
{
    int num_nodes = count_nodes(root);
    int * tmp_arr = (int *)malloc(sizeof(int) * num_nodes);
    int tmp_arr_index = 0;

    traversal(root, tmp_arr, &tmp_arr_index);

    int min = INT_MAX;
    int second_min = INT_MAX;
    bool int_max = false;

    int i=0;
    for(i=0; i<tmp_arr_index; i++)
    {
        if(tmp_arr[i] < min)
        {
            min = tmp_arr[i];
        }
    }

    for(i=0; i<tmp_arr_index; i++)
    {
        if(tmp_arr[i] <= second_min && tmp_arr[i] > min)
        {
            int_max = true;
            second_min = tmp_arr[i];
        }
    }

    if(second_min == INT_MAX && int_max == false)
        second_min = -1;

    return second_min;
}