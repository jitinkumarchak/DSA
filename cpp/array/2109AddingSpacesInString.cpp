#include <iostream>
#include <vector>
using namespace std;

void method2(string s, vector<int> spaces)
{
    int m = s.size(), n = spaces.size();
    string ans(m + n, ' ');
    int j = 0;

    for (int i = 0; i < m; i++)
    {
        if (j < n && i == spaces[j])
        {
            j++;
        }
        ans[i + j] = s[i];
    }

    for (char ch = 0; ch < ans.size(); ch++)
    {
        cout << ans[ch];
    }
}

int main()
{
    string s = "MyNameIsJitin";
    vector<int> spaces = {2, 6, 8};
    int j = 0;
    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        if (j < spaces.size() && i == spaces[j])
        {
            ans += ' ';
            j++;
        }
        ans += s[i];
    }
    for (char ch = 0; ch < ans.size(); ch++)
    {
        cout << ans[ch];
    }
    cout << endl;

    method2(s, spaces);

    return 0;
}