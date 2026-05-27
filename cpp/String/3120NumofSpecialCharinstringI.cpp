#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aAbBcC";

    vector<bool> lower(26, false);
    vector<bool> upper(26, false);

    for (char c : s)
    {
        if (islower(c))
            lower[c - 'a'] = true;
        else if (isupper(c))
            upper[c - 'A'] = true;
    }

    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (lower[i] && upper[i])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}