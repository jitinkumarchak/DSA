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

    void insertatTail(int val)
    {
        Node *newnode = new Node(val);

        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            newnode->next = head;
        }
    }

    void deleteathead()
    {

        if (head == NULL)
        {
            cout << "CLL is empty";
            return;
        }
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void deleteattail()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = tail;
            Node *prev = head;
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
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
    cll.Insertathead(2);
    cll.insertatTail(3);
    cll.print();
    cll.deleteattail();
    cll.deleteattail();
    cll.deleteattail();
    cll.print();

    return 0;
}