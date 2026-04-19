
#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

// top view of binary tree
void topview(Node *root) // O(nlogn);
{
    queue<pair<Node *, int>> q; //(node,horizontal distance);
    map<int, int> m;            // hd,node val;
    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if (m.find(currHD) == m.end()) // O(logn)
        {
            m[currHD] = curr->data;
        }

        if (curr->left != NULL)
        {
            q.push({curr->left, currHD - 1});
        }
        if (curr->right != NULL)
        {
            q.push({curr->right, currHD + 1});
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(preorder);

    topview(root);

    return 0;
}