#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days =5;

    int start = *max_element(weights.begin(),weights.end());
    int end  = accumulate(weights.begin(), weights.end(), 0);
    
    while(start < end){
        int mid = start + (end - start) / 2;
        int dayCount = 1;
        int currentLoad = 0;

        for(int weight : weights){
            if(currentLoad + weight > mid){
                dayCount++;
                currentLoad = 0;
            }
            currentLoad += weight;
        }

        if(dayCount > days){
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    cout << start;


    return 0;
}