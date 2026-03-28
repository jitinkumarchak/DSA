#include <iostream>
#include <vector>
using namespace std;

int freqcount(vector<int> &arr,int n){
    int count0= 0, count1 = 0, count2 = 0;

    for(int i =0 ; i<n;i++){
        if(arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    int idx = 0;
    for(int i=0;i<count0;i++){
     arr[idx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[idx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[idx++] = 2;
    }
return idx;
}

int main (){


    vector<int> arr = {0,1,2,0,2,1};
    int n = arr.size();

    cout << freqcount(arr,n) << " ";

    return 0;
}