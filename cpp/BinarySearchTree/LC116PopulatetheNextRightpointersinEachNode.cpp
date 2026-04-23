#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *next;

    Node(int val)
    {
        data = val;
        left = right = next = NULL;
    }
};

Node *populate(Node *root)
{
    if (root == NULL || root->left == NULL)
    {
        return root;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    Node *prev = NULL;

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            if (q.size() == 0)
            {
                break;
            }
            q.push(NULL);
        }
        else
        {
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
            if (prev != NULL)
            {
                prev->next = curr;
            }
        }
        prev = curr;
    }
    return root;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(50);
    root->right->left = new Node(7);

    populate(root);

    cout << root->next << endl;
    cout << root->right->next << endl;

    return 0;
}