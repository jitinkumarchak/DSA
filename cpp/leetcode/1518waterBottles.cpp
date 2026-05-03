#include <iostream>
using namespace std;

int main(){
    int filledBottles = 15;
    int exnum = 4;

    int total = 0;
    int empty = 0;

    while(filledBottles > 0){
        total += filledBottles;
        empty += filledBottles;

        filledBottles = empty / exnum;
        empty = empty % exnum;
    }
    cout << total;

    return 0;
}