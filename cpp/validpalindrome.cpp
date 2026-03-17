#include <iostream>
using namespace std;

void ispalindrome(string s){
    int left = 0;
    int right = s.length() - 1;
    bool ispalindrome = true;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            ispalindrome = false;
            break;
        }
        left++;
        right--;
    }
 cout << ispalindrome;
}

int main()
{
//     string s = "mffam";
//     int left = 0;
//     int right = s.length() - 1;
//     bool ispalindrome = true;

//     while (left < right)
//     {
//         if (s[left] != s[right])
//         {
//             ispalindrome = false;
//             break;
//         }
//         left++;
//         right--;
//     }
// cout << ispalindrome;
//     return ispalindrome;
    string s = "madam";
    ispalindrome(s);
     return 0;
}