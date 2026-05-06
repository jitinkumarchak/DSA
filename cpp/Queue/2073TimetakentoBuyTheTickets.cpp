#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> tickets = {2, 3, 2};
    int k = 2;

    int time = 0;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (i <= k)
        {
            time += min(tickets[i], tickets[k]);
        }
        else
        {
            time += min(tickets[i], tickets[k] - 1);
        }
    }
    cout << time;

    return 0;
}