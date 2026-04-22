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
    if (root == NULL)
    {
        return;
    }

    helper(root->left, ans);
    ans.push_back(root->data);
    helper(root->right, ans);
}

vector<int> MorriesInorderTRaversal(Node *root, vector<int> &ans)
{

    Node *curr = root;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            Node *IP = curr->left;
            while (IP->right != NULL && IP->right != curr)
            {
                IP = IP->right;
            }

            if (IP->right == NULL)
            {
                IP->right = curr; // thread create
                curr = curr->left;
            }
            else
            {
                IP->right = NULL; // thread delete
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> INorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(INorder);
    vector<int> ans;
    vector<int> res;
    helper(root, ans);
    MorriesInorderTRaversal(root, res);

    //recursive traversal

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;


    ///morries inorder traversal

    for (int val : res)
    {
        cout <<  val << " ";
    }

    return 0;
}