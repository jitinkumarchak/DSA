#include <iostream>
#include <vector>
using namespace std;

vector<int> sortarr(vector<int> arr){
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

int main()
{

    vector<int> arr = {3, 5, 6, 4};
    vector<int> arr2 = {7,8,9,};

    vector<int> merged;
    for(int i =arr[i] ;i<arr.size();i++){
           merged.push_back(i);
    }
    for (int i = arr2[i]; i < arr2.size(); i++)
    {
        merged.push_back(i);
    }
    
    
    sortarr(arr);
    sortarr(arr2);
    sortarr(merged);
    for(int i =0 ;i<merged.size();i++){
        cout  << i << " ";
    }
    
    return 0;
}