#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList
{
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *NewNode = new Node(val);

        if (head == NULL)
        {
            head = tail = NewNode;
        }
        else
        {
            NewNode->next = head;
            head->prev = NewNode;
            head = NewNode;
        }
    }

    void Push_back(int val)
    {
        Node *NewNode = new Node(val);

        if (head == NULL)
        {
            head = tail = NewNode;
        }
        else
        {
            NewNode->prev = tail;
            tail->next = NewNode;
            tail = NewNode;
        }
    }

    void popfront()
    {
        if (head == NULL)
        {
            cout << "DLL is empty";
        }
        Node *temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "dll is empty";
        }

        Node *temp = tail;
        tail = tail->prev;

        if (tail != NULL)
        {
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << " NULL\n";
    }
};

int main()
{
    DoublyList dll;

    dll.Push_back(1);
    dll.Push_back(2);
    dll.Push_back(3);
    dll.Push_back(4);
    dll.print();
    dll.pop_back();
    dll.pop_back();
    dll.print();

    return 0;
}