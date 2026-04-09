#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;

    Node(int _val)
    {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution
{
public:
    Node *flatten(Node *head)
    {

        if (head == NULL)
            return head;

        Node *curr = head;

        while (curr != NULL)
        {

            if (curr->child != NULL)
            {

                Node *next = curr->next;

                Node *childHead = flatten(curr->child);

                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                Node *tail = childHead;
                while (tail->next != NULL)
                {
                    tail = tail->next;
                }

                if (next != NULL)
                {
                    tail->next = next;
                    next->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    // creating nodes
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);

    Node *c1 = new Node(7);
    Node *c2 = new Node(8);
    Node *c3 = new Node(9);

    // main list
    n1->next = n2;
    n2->prev = n1;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    // child list
    n3->child = c1;

    c1->next = c2;
    c2->prev = c1;

    c2->next = c3;
    c3->prev = c2;

    Solution obj;
    Node *result = obj.flatten(n1);

    cout << "Flattened List: ";
    printList(result);

    return 0;
}