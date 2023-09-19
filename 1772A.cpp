#include<iostream>
using namespace std;

int main(){
    int t, a, b;
    string op;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> op;
        a = op[0] - '0';
        b = op[2] - '0';
        cout << a + b << endl;
    }
    return 0;
}
