#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "ABAB";
    int k = 2;

    vector<int> freq(26, 0);
    int left = 0, maxfreq = 0, maxlen = 0;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'A']++;
        maxfreq = max(maxfreq, freq[s[i] - 'A']);

        while ((i - left + 1) - maxfreq > k)
        {
            freq[s[left] - 'A']--;
            left++;
        }
        maxlen = max(maxlen, i - left + 1);
    }

    cout << maxlen;

    return 0;
}