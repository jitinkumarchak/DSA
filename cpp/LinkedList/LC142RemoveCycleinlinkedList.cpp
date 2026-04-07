#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

ListNode *hasCycle(ListNode *head)
{

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
        }
    // no cycle
    if (fast == NULL || fast->next == NULL)
        return NULL;

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

int main()
{

    // Creating nodes
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Creating a cycle
    fourth->next = second;

    ListNode* result = hasCycle(head);

    if (hasCycle(head))
        cout << "Cycle detecteda and start at node : " << result->val;
    else
        cout << "No cycle";

    return 0;
}