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
Node *BuildTree(vector<int> preorder)
{
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);

    return root;
}

bool SameTree(Node *p, Node *q)
{
    if (p == NULL || q == NULL)
    {
        return p == q;
    }

    int leftidentical = SameTree(p->left, q->left);
    int rightidentical = SameTree(p->right, q->right);
    return leftidentical && rightidentical && p->data == q->data;
}

int main()
{
    vector<int> p = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> q = {1, 2, -1, -1, 3, 2, -1, -1, 5, -1, -1};
    idx = -1;
    Node *root1 = BuildTree(p);
    idx = -1;
    Node *root2 = BuildTree(q);

    cout << SameTree(root1, root2) << " ";

    return 0;
}