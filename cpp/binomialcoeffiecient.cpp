#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int r = 2;

    int Nfact = 1;
    for (int i = 1; i <= n; i++)
    {
        Nfact = Nfact * i;
    };

    int Rfact = 1;
    for (int i = 1; i <= r; i++)
    {
        Rfact = Rfact * i;
    };

    int NminusRfact = 1;
    for (int i = 1; i <= n - r; i++)
    {
        NminusRfact = NminusRfact * i;
    };

    int nCr = Nfact / (Rfact * NminusRfact);

    cout << "nCr is : " << nCr << endl;
    return 0;
}