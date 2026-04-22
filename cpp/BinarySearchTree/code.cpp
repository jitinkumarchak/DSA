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

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

Node *BST(vector<int> &arr)
{
    Node *root = NULL;

    for (int val : arr)
    {
        root = insert(root, val);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node *root, int target)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == target)
    {
        return true;
    }

    if (target < root->data)
    {
        return search(root->left, target);
    }
    else
    {
        return search(root->right, target);
    }
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 4, 6};
    Node *root = BST(arr);
    // inorder(root);
    cout << search(root, 8) << endl;

    return 0;
}