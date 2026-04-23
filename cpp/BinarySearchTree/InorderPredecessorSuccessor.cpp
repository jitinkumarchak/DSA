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

Node *rightMostinLeftSubtree(Node *root)
{
    Node *ans;
    while (root != NULL)
    {
        ans = root;
        root = root->right;
    }
    return ans;
}

Node *rightMostinRightSubtree(Node *root)
{
    Node *ans;
    while (root != NULL)
    {
        ans = root;
        root = root->left;
    }
    return ans;
}
vector<int> findpredecessorsuccessor(Node *root, int key)
{
    Node *curr = root;
    Node *pred = NULL;
    Node *succ = NULL;

    while (curr != NULL)
    {
        if (key < curr->data)
        {
            succ = curr;
            curr = curr->left;
        }
        else if (key > curr->data)
        {
            pred = curr;
            curr = curr->right;
        }
        else
        {
            if (curr->left != NULL)
            {
                pred = rightMostinLeftSubtree(curr->left);
            }

            if (curr->right != NULL)
            {
                succ = rightMostinRightSubtree(curr->right);
            }
            break;
        }
    }
    int p = (pred ? pred->data : -1);
    int s = (succ ? succ->data : -1);
    return {p, s};
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left = new Node(1);
    root->right = new Node(8);
    root->right->right = new Node(9);
    root->right->left = new Node(7);

    int key = 1;
    vector<int> ans = findpredecessorsuccessor(root, key);
    cout << " pred: " << ans[0] << endl;
    cout << " succ : " << ans[1] << endl;

    return 0;
}