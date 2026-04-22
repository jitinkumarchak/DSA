#include <iostream>
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

int prevorder = 0;

int kthSmallest(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->left != NULL)
    {
        int leftAns = kthSmallest(root->left, k);
        if (leftAns != -1)
        {
            return leftAns;
        }
    }

    if (prevorder + 1 == k)
    {
        return root->data;
    }
    prevorder++;

    if (root->right != NULL)
    {
        int rightAns = kthSmallest(root->right, k);
        if (rightAns != -1)
        {
            return rightAns;
        }
    }

    return -1;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->right = new Node(4);
    root->left->left = new Node(1);
    root->left->left->right = new Node(2);

    cout << kthSmallest(root, 5);

    return 0;
}