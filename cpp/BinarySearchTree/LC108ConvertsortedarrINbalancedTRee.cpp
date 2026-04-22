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

Node *helper(vector<int> &nums, int st, int end)
{
    if (st > end)
    {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node *root = new Node(nums[mid]);
    cout << root->data << " ";
    root->left = helper(nums, st, mid - 1);
    root->right = helper(nums, mid + 1, end);

    return root;
}

int main()
{
    vector<int> nums = {-10, -3, 0, 5, 7};
    Node *root = helper(nums, 0, nums.size() - 1);
    return 0;
}