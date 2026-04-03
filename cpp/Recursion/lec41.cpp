#include <iostream>
using namespace std;

void printNUm(int n)
{
    if (n == 1)
    {
        cout << "1\n";
        return;
    }

    cout << n << " ";
    printNUm(n - 1);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    return n + sum(n-1);
}
int main()
{
    cout <<sum(4);
    return 0;
}