#include <iostream>
using namespace std;

class Node // class
{
public:
    int data; // object
    Node *next;

    Node(int val)
    { // parameterized constructor
        data = val;
        next = NULL;
    }
};

class List
{
    Node *Head;
    Node *Tail;

public:
    List()
    {
        Head = Tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dyanmic object node creation / memory allocation allow krta hai
        // Node newNode(val);  static , i dont want this beacause its static means after completing this fucntion the mode will be deleted.

        if (Head == NULL)
        {
            Head = Tail = newNode;
            return;
        }
        else
        {
            newNode->next = Head;
            Head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (Head == NULL)
        {
            Head = Tail = newNode;
            return;
        }
        else
        {
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    void pop_front()
    {
        if (Head == NULL)
        {
            cout << " ll is empty" << endl;
            return;
        }

        Node *temp = Head;

        Head = Head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (Head == NULL)
        {
            cout << " ll is empty";
            return;
        }

        Node *temp = Head;
        while (temp->next != Tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete Tail;
        Tail = temp;
    }

    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "invalid pos" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = Head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp->next == NULL)
            {
                cout << "invalid pos\n";
                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key)
    {
        int idx = 0;
        Node *temp = Head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

        void printLL()
        {
            Node *temp = Head;

            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    };

    int main()
    {

        List LL;

        LL.push_front(3);
        LL.push_front(2);
        LL.push_front(1);
        LL.printLL();
        LL.insert(4, 0);
        LL.printLL();

        cout << LL.search(3) << endl;
        return 0;
    }