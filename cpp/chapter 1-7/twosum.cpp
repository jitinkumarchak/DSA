#include <iostream>
#include <vector>
using namespace std;

int main (){
    int arr[] = {1,2,1,5,5};
    int tar = 3;

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i =0;i<n;i++){
        for(int  j=i+1;j<n;j++){
        if(arr[i]+arr[j] == tar){
            cout << i << " " << j << " ," ;
        }
        }
    }
    return 0;
}