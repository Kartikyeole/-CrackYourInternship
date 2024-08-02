class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (root == NULL)
        {
            return 0;
        }

        int sum = rangeSumBST(root->left, low, high);
        sum = sum + rangeSumBST(root->right, low, high);

        if (low <= root->val && root->val <= high)
        {
            return sum + root->val;
        }
        return sum;
    }
};