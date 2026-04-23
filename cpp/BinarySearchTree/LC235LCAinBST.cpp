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

Node *LCA(Node *root, Node *p, Node *q)
{
    if (root == NULL)
        return NULL;

    if (root->data > p->data && root->data > q->data)
    {
        return LCA(root->left, p, q);
    }
    else if (root->data < p->data && root->data < q->data)
    {
        return LCA(root->right, p, q);
    }
    else
    {
        return root;
    }
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(2);
    root->right = new Node(8);
    root->left->right = new Node(4);
    root->left->left = new Node(0);
    root->left->right->right = new Node(5);
    root->left->right->left = new Node(3);

    Node *q = root->left;
    Node *p = root->right;

    LCA(root, p, q);
    cout << root->data << endl;

    return 0;
}