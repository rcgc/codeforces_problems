#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t, n, w, h, c1=1, c2=1;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> w >> h >> n;
        while(w%2==0){
            w/=2;
            c1*=2;
        }
        while(h%2==0){
            h/=2;
            c2*=2;
        }
        c1 * c2 >= n ? cout << "YES" << endl : cout << "NO" << endl;
        c1 = c2 = 1;
    } return 0;
}
