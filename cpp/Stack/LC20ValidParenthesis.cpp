#include <iostream>
#include <stack>
using namespace std;

bool isvalid(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.size() == 0)
            {
                return false;
            }

            if (s.top() == '(' && str[i] == ')' || s.top() == '{' && str[i] == '}' || s.top() == '[' && str[i] == ']')
            {
                s.pop();
            }
            else // no match
            {
                return false;
            }
        }
    }
    return s.size() == 0;
}

int main()
{
    cout << isvalid("{(}");

    return 0;
}