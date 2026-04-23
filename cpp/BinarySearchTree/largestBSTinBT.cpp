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

class INFO
{
public:
    int min, max, size;

    INFO(int mi, int mx, int sz)
    {
        min = mi;
        max = mx;
        size = sz;
    }
};

INFO helper(Node *root) // O(n)
{
    if (root == NULL)
    {
        return INFO(INT_MAX, INT_MIN, 0);
    }

    INFO left = helper(root->left);
    INFO right = helper(root->right);

    if (root->data > left.max && root->data < right.min)
    {
        int currmin = min(root->data, left.min);
        int currmax = max(root->data, right.max);
        int currsz = left.size + right.size + 1;

        return INFO(currmin, currmax, currsz);
    }
    return INFO(INT_MIN, INT_MAX, max(left.size, right.size));
}

int largestBSTinBT(Node *root)
{
    INFO info = helper(root);
    return info.size; // max BST size;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(50);

    cout << largestBSTinBT(root) << endl;

    return 0;
}