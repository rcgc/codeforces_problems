#include<iostream>
using namespace std;

int main(){
    int k, w, n, total;
    cin >> k >> w >> n;
    total = ( ( n*(n+1 ) )/2 )*k;
    if(w < total) cout << total - w;
    else cout << 0;
    return 0;
}
