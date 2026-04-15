#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    queue<int> q;
    deque<int> dq;

    q.push(1);
    q.push(2);
    q.push(3);

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(0);

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}