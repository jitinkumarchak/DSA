#include <unordered_map>
#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return NULL;

        unordered_map<Node *, Node *> m;

        Node *NewHead = new Node(head->val);
        Node *Oldtemp = head->next;
        Node *Newtemp = NewHead;

        m[head] = NewHead;

        // copy next pointers
        while (Oldtemp != NULL)
        {
            Node *CopyNode = new Node(Oldtemp->val);

            m[Oldtemp] = CopyNode;
            Newtemp->next = CopyNode;

            Oldtemp = Oldtemp->next;
            Newtemp = Newtemp->next;
        }

        // copy random pointers
        Oldtemp = head;
        Newtemp = NewHead;

        while (Oldtemp != NULL)
        {
            Newtemp->random = m[Oldtemp->random];

            Oldtemp = Oldtemp->next;
            Newtemp = Newtemp->next;
        }

        return NewHead;
    }
};

int main()
{
    // creating sample list
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->next = third;

    head->random = third;
    second->random = head;
    third->random = second;

    Solution obj;
    Node *copy = obj.copyRandomList(head);

    // print copied list
    while (copy != NULL)
    {
        cout << "Val: " << copy->val;

        if (copy->random)
            cout << " Random: " << copy->random->val;

        cout << endl;

        copy = copy->next;
    }

    return 0;
}