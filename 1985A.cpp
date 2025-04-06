#include<iostream>
using namespace std;

int main(){
    int t;
    string a, b;
    char aux;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        if(a == b){
            cout << a << " " << b << endl;
            continue;
        }
        aux = char(a[0]);
        a[0] = char(b[0]);
        b[0] = aux;
        cout << a << " " << b << endl;
    }
    return 0;
}
