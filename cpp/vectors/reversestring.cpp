#include <iostream>
#include <vector>
using namespace std;

void reversestr(string s){
    int left =0;
    int right  = s.length()-1;

    while(left < right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    cout << s;
}

int main(){
    vector<string>s = {"hello"};
     reversestr(s[0]) ;
    return 0;
}