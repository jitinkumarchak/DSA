#include <iostream>
#include <vector>
using namespace std;

int Uniquesol(vector<int> &gas, vector<int> &cost)
{
    int totgas = 0;
    int totcost = 0;
    int st = 0;
    int currgas = 0;

    for (int i = 0; i < gas.size(); i++)
    {
        currgas += (gas[i] - cost[i]);
        totcost += cost[i];
        totgas += gas[i];

        if (currgas < 0)
        {
            st = i + 1;
            currgas = 0;
        }
    }
    cout << st;
    return totgas < totcost ? -1 : st;
}

int main()
{

    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    Uniquesol(gas, cost);
    return 0;
}