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

Node *prevNode = NULL;
Node *first = NULL;
Node *sec = NULL;

void inorder(Node *root) // TC : O(n), SC= O(n), SC= O(1) using morries inorder traversal;
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    if (prevNode != NULL && prevNode->data > root->data)
    {
        if (!first)
        {
            first = prevNode;
        }
        sec = root;
    }

    prevNode = root;
    inorder(root->right);
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(10);

    inorder(root);

    cout << " Before : " << first->data << " : " << sec->data;
    cout << endl;

    int temp = first->data;
    first->data = sec->data;
    sec->data = temp;

    cout << " After : " << first->data << " : " << sec->data;

    return 0;
}