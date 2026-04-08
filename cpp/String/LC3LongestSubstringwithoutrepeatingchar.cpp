#include <iostream>
#include <vector>
using namespace std;
int substringcount(string s)
{
    vector<int> freq(256, -1);
    int maxlen = 0, start = -1;

    for (int i = 0; i < s.size(); i++)
    {
        if (freq[s[i]] > start)
        {
            start = freq[s[i]];
        }
        freq[s[i]] = i;
        maxlen = max(maxlen, i - start);
    }
    return maxlen;
}

int main()
{
    string s = "abaabcb";
    cout << substringcount(s);
    return 0;
}
