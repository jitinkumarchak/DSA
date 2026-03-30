#include <iostream>
using namespace std;

bool isAlphaNum(char ch)
{
    if (ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z')
    {
        return true;
    }
    return false;
}

bool ispalindrome(string s, int n)
{
    int st = 0, end = n - 1;

    while (st < end)
    {
        if (!isAlphaNum(s[st]))
        {
            st++; continue;
        };
        if (!isAlphaNum(s[end]))
        {
            end--; continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }

    return true;
}

int main()
{
    string s = "MadAm&";
    int n = s.length();

    cout << ispalindrome(s,n);
    
    return 0;
}