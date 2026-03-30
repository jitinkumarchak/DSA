#include <iostream>
#include <algorithm>
using namespace std;

string Reverseinstring(string s, int n)
{
    reverse(s.begin(), s.end());
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());

        if (word.length() > 0)
        {
            ans += ' ' + word;
        }
    }
    return ans.substr(1);
}

int main()
{
    string s = "my name is jitin";
    int n = s.length();
    cout << Reverseinstring(s, n);
    return 0;
}