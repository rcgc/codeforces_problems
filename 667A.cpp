#include<iostream>
using namespace std;
int main(){
    int h, n,i,a,w=0;
    cin >> n >> h;
    for(i=1;i<=n;i++){
        cin >> a;
        if(a>h) w+=2;
        else w++;
    }
    cout << w;
    return 0;
}
