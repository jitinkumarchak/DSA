#include <iostream>
#include<vector>
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

void helper(Node* root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    ans.push_back(root->val);
    helper(root->left, ans);
    helper(root->right, ans);
}

int main () {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
     helper(Node* root,preorder);


    return 0;

}