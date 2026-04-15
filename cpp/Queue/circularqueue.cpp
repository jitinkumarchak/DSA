#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int currsize, cap;
    int f, r;

public:
    CircularQueue(int size)
    {
        cap = size;
        f = 0, r = -1;
        arr = new int(cap);
        currsize = 0;
    }

    void push(int data)
    {
        if (currsize == cap)
        {
            cout << "arr is full";
            return;
        }

        r = (r + 1) % cap;
        arr[r] = data;
        currsize++;
    }

    void pop()
    {
        if (empty())
        {
            cout << "empty";
            return;
        }

        f = (f + 1) % cap;
        currsize--;
    }

    int front()
    {
        if (empty())
        {
            cout << "empty" << " ";
            return -1;
        }
        return arr[f];
    }

    bool empty()
    {
        return currsize == 0;
    }

    void printarr()
    {
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    // cq.printarr();

    while(!cq.empty()){
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;

    return 0;
}