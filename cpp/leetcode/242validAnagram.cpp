#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s = "listen";
    string t = "silint";

    if(s.length() != t.length()) {
        cout << false << endl;
    };

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t){
        cout << true << endl;
    }else{
        cout << false << endl;
    }
    
    return 0;
};