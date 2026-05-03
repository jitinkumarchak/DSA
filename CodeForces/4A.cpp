// watermelon problem  : 800 : 4A

#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    cout << ((w % 2 == 0 && w > 2) ? "Yes" : "NO") << endl;
    return 0;
}