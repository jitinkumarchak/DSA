#include <iostream>
#include <vector>
using namespace std;

vector<int> PlusONE(vector<int> &A){
    int n = A.size();

    for(int  i =n-1;i>=0;i--){
        if(A[i] < 9){
            A[i]++;
            return A;
        }
        A[i] = 0;
    }
    A.insert(A.begin(),1);
    return A;
}

int main(){
    vector<int> A = {1,2,3};

    PlusONE(A);
    for(int i = 0;i<A.size();i++){
        cout << A[i] << "  ";
    }

    return 0;
}