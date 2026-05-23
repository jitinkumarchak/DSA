#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> socks = {10, 20, 20, 10, 10, 30, 50, 10, 20};

    int n = socks.size();

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[socks[i]]++;
    }

    int pairs = 0;

    for (auto it : freq)
    {
        pairs += it.second / 2;
    }

    cout << pairs << endl;

    return 0;
}