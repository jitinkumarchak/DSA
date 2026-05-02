#include <iostream>
#include <vector>
using namespace std;

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
    for (char ch = 0 ;ch < ans.size(); ch++ )
    {
        cout << ans[ch];
    }

    return 0;
}