#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num = 30;

    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            cout << "fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "buzz" << endl;
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzbuzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}