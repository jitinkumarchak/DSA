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
    ListNode *swapPairs(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *first = head;
        ListNode *sec = head->next;
        ListNode *prev = NULL;

        while (first != NULL && sec != NULL)
        {

            ListNode *third = sec->next;

            sec->next = first;
            first->next = third;

            if (prev != NULL)
            {
                prev->next = sec;
            }
            else
            {
                head = sec;
            }

            prev = first;
            first = third;

            if (third != NULL)
            {
                sec = third->next;
            }
            else
            {
                sec = NULL;
            }
        }

        return head;
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

    // create list: 1 -> 2 -> 3 -> 4
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    Solution obj;
    head = obj.swapPairs(head);

    cout << "Swapped List: ";
    printList(head);

    return 0;
}