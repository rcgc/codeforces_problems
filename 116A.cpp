#include<iostream>
using namespace std;

int main(){
    int n, a, b, highest=0, acum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        acum -= a;
        acum += b;
        if(acum>highest) highest=acum;
    }cout << highest;
    return 0;
}
