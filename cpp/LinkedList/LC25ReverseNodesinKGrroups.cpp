#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = NULL;
    }

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }

    ListNode(int x, ListNode *next)
    {
        val = x;
        this->next = next;
    }
};

class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {

        ListNode *temp = head;
        int count = 0;

        // check if k nodes exist
        while (count < k)
        {
            if (temp == NULL)
            {
                return head;
            }
            temp = temp->next;
            count++;
        }

        // recursively reverse remaining list
        ListNode *prevNode = reverseKGroup(temp, k);

        // reverse current group
        temp = head;
        count = 0;

        while (count < k)
        {
            ListNode *next = temp->next;

            temp->next = prevNode;
            prevNode = temp;
            temp = next;

            count++;
        }

        return prevNode;
    }
};

void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    // creating list: 1->2->3->4->5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    Solution obj;
    head = obj.reverseKGroup(head, k);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}