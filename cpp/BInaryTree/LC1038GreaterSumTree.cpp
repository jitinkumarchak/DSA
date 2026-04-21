#include <iostream>
using namespace std;

// Definition
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    int sum = 0;

    TreeNode *bstToGst(TreeNode *root)
    {

        if (root == NULL)
            return NULL;

        // Right
        bstToGst(root->right);

        // Root
        sum += root->val;
        root->val = sum;

        // Left
        bstToGst(root->left);

        return root;
    }
};

// Preorder print (for verification)
void print(TreeNode *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    print(root->left);
    print(root->right);
}

int main()
{

    /*
        Original BST:
              4
             / \
            1   6
    */

    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);

    Solution obj;
    obj.bstToGst(root);

    cout << "Transformed Tree (Preorder): ";
    print(root);

    return 0;
}