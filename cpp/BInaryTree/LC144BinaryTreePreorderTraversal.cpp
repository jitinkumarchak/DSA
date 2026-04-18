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

void helper(Node *root, vector<int> &ans)
{
     if(root == NULL){
        return;
     }

    ans.push_back(root->data);
    helper(root->left, ans);
    helper(root->right, ans);

}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(preorder);
    vector<int> ans; 
    helper(root, ans);

    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}