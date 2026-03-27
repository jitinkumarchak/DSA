#include <iostream>
using namespace std;


void selectionsort(int arr[] , int n ){  // O(n^2)
    for(int i = 0;i<n-1;i++){
        int smallestidx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
    }
    
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 4, 7, 6, 5};
    int n = 5;

    selectionsort(arr, n);
    printArray(arr, n);

    return 0;
}