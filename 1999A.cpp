#include<iostream>
using namespace std;

int main(){
    string s;
    int t, a, b;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        a = s[0] - '0';
        b = s[1] - '0';
        cout << a+b << endl;
    }
    return 0;
}
