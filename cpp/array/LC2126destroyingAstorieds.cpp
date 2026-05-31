#include <bits/stdc++.h>
using namespace std;

bool astoriedsdestroyed(int mass, vector<int> asteroids)
{
    sort(asteroids.begin(), asteroids.end());
    long long sum = mass;
    for (int i = 0; i < asteroids.size(); i++)
    {
        if (asteroids[i] > sum)
        {
            return false;
        }
        sum += asteroids[i];
    }
    return true;
}

int main()
{
    int mass = 10;
    vector<int> asteroids = {3, 10, 21, 4, 5};

    cout << astoriedsdestroyed(mass , asteroids);
    return 0;
}