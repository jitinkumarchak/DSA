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

Node *prevNode = NULL;

int Mindistbetweenodes(Node *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }

    int ans = INT_MAX;

    if (root->left != NULL)
    {
        int leftMin = Mindistbetweenodes(root->left);
        ans = min(ans, leftMin);
    }

    if (prevNode != NULL)
    {
        ans = min(ans, root->data - prevNode->data);
    }
    prevNode = root;

    if (root->right != NULL)
    {
        int rightMin = Mindistbetweenodes(root->right);
        ans = min(ans, rightMin);
    }

    return ans;
}
int main()
{
    Node *root = new Node(83);
    root->left = new Node(62);
    root->right = new Node(88);
    root->left->right = new Node(82);
    root->left->left = new Node(42);
    root->left->left->right = new Node(52);
    cout << Mindistbetweenodes(root);

    return 0;
}