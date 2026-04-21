#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int search(vector<int> &inorder, int left, int right, int val)
{
    for (int i = left; i <= right; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

Node *helper(vector<int> &preorder, vector<int> &inorder, int &preidx, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }

    Node *root = new Node(preorder[preidx]);

    int inIdx = search(inorder, left, right, preorder[preidx]);
    preidx++;

    root->left = helper(preorder, inorder, preidx, left, inIdx - 1);
    root->right = helper(preorder, inorder, preidx, inIdx + 1, right);

    return root;
}

int print(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);

    return 0;
}
int main()
{
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    int preIdx = 0;
    Node *root = helper(preorder, inorder, preIdx, 0, inorder.size() - 1);

    print(root);

    return 0;
}