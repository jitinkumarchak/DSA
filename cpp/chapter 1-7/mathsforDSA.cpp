#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int gcd = 1;

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
}

int gcdREC(int a, int b)
{
    if (b == 0)
        return a;

    return gcdREC(b, a % b);
}

int lcm(int a, int b)
{
    int gcd = gcdREC(a,b);

    return a * b / gcd;
}

int main()
{
    cout << lcm(20, 28);
    return 0;
}