#include <iostream>
#include <stack>
using namespace std;

class getmin
{
public:
    getmin()
    {
    }

    stack<long long int> s;
    long long int minval;

    void push(int val)
    {
        if (s.empty())
        {
            s.push(val);
            minval = val;
        }
        else
        {
            if (val < minval)
            {
                s.push((long long)2 * val - minval);
                minval = val;
            }
            else
            {
                s.push(val);
            }
        }
    }

    void pop()
    {
        if (s.top() < minval)
        {
            minval = 2 * minval - s.top();
            s.pop();
        }
        else
        {
            s.pop();
        }
    }

    long long int top()
    {
        if (s.top() < minval)
        {
            return minval;
        }
        else
        {
            return s.top();
        }
    }

    long long int getMinVal()
    {
        return minval;
    }
};

int main()
{
    getmin obj;
    obj.push(-2);
    obj.push(0);
    obj.push(-3);
    cout << obj.getMinVal() << endl;
    obj.pop();
    obj.top();
    cout << obj.getMinVal() << endl;

    return 0;
}