#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;                   // read upper limit

    int oddsum = 0;
    int i = 1;
    // sum odd numbers from 1 to n using while loop
    while (i <= n) {
        if (i % 2 != 0) {
            oddsum += i;
        }
        i++;
    }

    cout << oddsum;
    return 0;
}