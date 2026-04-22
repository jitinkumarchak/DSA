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

Node *InOrderSuccessor(Node *root) // left most node in right subtree
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node *DelNode(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (key < root->data)
    {
        root->left = DelNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = DelNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        { //  2 children
            Node *IS = InOrderSuccessor(root->right);
            root->data = IS->data;
            root->right = DelNode(root->right, IS->data);
        }
    }
    return root;
}
int main()
{
    vector<int> arr = {3, 2, 1, 5, 4, 6};
    Node *root = BST(arr);

    cout << " BEfore:" << " ";
    inorder(root);
    cout << endl;

    DelNode(root, 1);

    cout << " after : ";

    inorder(root);
    cout << endl;

    return 0;
}