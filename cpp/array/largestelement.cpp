#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[5] = {90, 80, 10, 60, 50};
    int largest = INT_MIN;

    for(int i =0;i<size;i++){
        if(marks[i] > largest){
            largest = marks[i];
        }
    }
    cout << "largest element is : " << largest << endl;
     return 0;
}
