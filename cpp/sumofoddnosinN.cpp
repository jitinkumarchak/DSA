#include <iostream>
using namespace std;

int main()
{

    // for loop
    //  int n = 5;
    //  int oddsum = 0;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      if (i % 2 != 0)
    //      {
    //          oddsum += i;
    //      }
    //  }
    //  cout << oddsum << endl;

    // while loop

    int n = 5;
    int oddsum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            oddsum += i;
        }
        i++;
    }
    cout << oddsum << endl;
    return 0;
}