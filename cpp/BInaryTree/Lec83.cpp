#include <iostream>
#include <vector>
#include <queue>
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

// preorder

void preOrder(Node *root) // O(n)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
};

// inorder

void Inorder(Node *root) // O(n)
{
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

// postorder
void postOrder(Node *root) // O(n)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
};

// level order

void LevelOrder(Node *root) // O(n)
{
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }

        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }

    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(preorder);
    preOrder(root);
    cout << endl;

    Inorder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    LevelOrder(root);
    return 0;
}