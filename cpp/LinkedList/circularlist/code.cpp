#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Circularlist
{

    Node *head;
    Node *tail;

public:
    Circularlist()
    {
        head = tail = NULL;
    }

    void Insertathead(int val)
    {
        Node *newnode = new Node(val);

        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            tail->next = newnode;
        }
    }
    void print()
    {
        if (head == NULL)
        {
            return;
        }

        cout << head->data << "->";
        Node *temp = head->next;

        while (temp != head)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << temp->data << endl;
    }
};

int main()
{
    Circularlist cll;

    cll.Insertathead(1);
    cll.print();

    return 0;
}