#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "aAbBcCdD";

    vector<int> lastlower(26, -1);
    vector<int> firstupper(26, -1);

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (islower(c))
        {
            lastlower[c - 'a'] = i;
        }
        else if (isupper(c))
        {
            if (firstupper[c - 'A'] == -1)
            {
                firstupper[c - 'A'] = i;
            }
        }
    }   
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (lastlower[i] != -1 && firstupper[i] != -1 && lastlower[i] < firstupper[i])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}