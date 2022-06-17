#include<iostream>
using namespace std;

int main(){
    int n, k, rem_minutes, i;
    cin >> n >> k;
    rem_minutes = 240 - k;
    for(i=1; i<=n; i++){
        rem_minutes-=i*5;
        if(rem_minutes < 0) break;
    }
    cout << i-1 << endl;
    return 0;
}
