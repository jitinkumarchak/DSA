#include <iostream>
#include <stack>
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

class BSTiterator
{
public:
    stack<Node *> s;

    void storeLeftNodes(Node *root)
    {
        while (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
    }
    BSTiterator(Node *root)
    {
        storeLeftNodes(root);
    }

    int next()
    {
        Node *ans = s.top();
        s.pop();

        storeLeftNodes(ans->right);
        return ans->data;
    }

    bool hasnext()
    {
        return s.size() > 0;
    }
};

int main()
{
    Node *root = new Node(7);
    root->left = new Node(3);
    root->right = new Node(15);
    root->right->right = new Node(20);
    root->right->left = new Node(9);

    BSTiterator it(root);

    while (it.hasnext())
    {
        cout << it.next() << " ";
    }

    return 0;
}