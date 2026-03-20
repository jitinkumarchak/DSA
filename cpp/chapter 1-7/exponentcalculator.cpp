#include <iostream>
using namespace std;
int main()
{
    int base = 5;
    int exponent = 2;

    int value = 1;

    for (int i = 1; i <= exponent;i++)
    {
        value = value * base;
 
    }
    cout << value;
    return 0;
}