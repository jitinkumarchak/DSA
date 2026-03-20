#include <iostream>
using namespace std;

int celciuscalculator(int farenheit)
{
    return (farenheit - 32) * 5 / 9;
}

int farenheitcalucalator(int celcius2){
    return (celcius2 * 9 / 5) + 32;
}

int main()
{
    int farenheit = 25;
    int celcius = celciuscalculator(farenheit);
    cout << "celcius is : " << celcius << endl;

    int celcius2 = 70;
    int farenheit2 = farenheitcalucalator(celcius2);
    cout << "farenheit is : " << farenheit2 << endl;
}