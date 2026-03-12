#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin >> letter;

    if (letter >= 97 && letter <= 122)
    {
        cout << "letter is lowercase";
    }
    else if (letter >= 65 && letter <= 90)
    {
        cout << "letter is uppercase";
    }
    else
    {
        cout << "letter is not an alphabet";
    }
    return 0;
}