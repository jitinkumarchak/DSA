#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> A = {1,2,4,4,3};
int n = A.size();

int l = 0;
int r = n-1;

   for(int i =0;i<n;i++){
    if(l != A[i+1]){
        l++;
    }
   }


    return 0;
}