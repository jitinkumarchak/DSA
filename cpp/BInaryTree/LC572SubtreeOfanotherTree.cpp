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

static int idx = -1;

Node *BuildTree(vector<int> &preorder)
{
    idx++;

    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);

    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);

    return root;
}

bool isidentical(Node *p, Node *q)
{
    if (p == NULL || q == NULL)
        return p == q;

    return (p->data == q->data) &&
           isidentical(p->left, q->left) &&
           isidentical(p->right, q->right);
}

bool isSubtree(Node *root, Node *subRoot)
{
    if (subRoot == NULL)
        return true;
    if (root == NULL)
        return false;

    if (root->data == subRoot->data && isidentical(root, subRoot))
        return true;

    return isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
}

int main()
{
    vector<int> tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> subtree = {3, 4, -1, -1, 5, -1, -1};

    // Build main tree
    idx = -1;
    Node *root = BuildTree(tree);

    // Build subtree
    idx = -1;
    Node *subRoot = BuildTree(subtree);

    if (isSubtree(root, subRoot))
        cout << "Yes, it is a subtree\n";
    else
        cout << "No, it is not a subtree\n";

    return 0;
}