#include <iostream>
using namespace std;

int main()
{
    string s = "abcd";
    string t = "dabcz";

    char ans = 0;

    for (char C : s)
        ans ^= C;
    for (char C : t)
        ans ^= C;

    cout << ans << " ";

    return 0;
}