#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    float n, x;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> x;
        if(n==1 || n==2) cout << 1 << endl;
        else cout << ceil((n-2)/x)+1 << endl;
    }
    return 0;
}
