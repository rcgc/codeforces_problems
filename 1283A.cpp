#include<iostream>
using namespace std;

int main(){
    int t, h, m;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> h >> m;
        if(h<23) cout << (23-h)*60 + (60-m) << endl;
        else cout << 60-m << endl;
    } return 0;
}
