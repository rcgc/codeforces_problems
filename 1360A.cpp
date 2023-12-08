#include<iostream>
using namespace std;

int main(){
    int t, a, b, max_n, min_n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        if(a >= b){
            max_n = a;
            min_n = b;
        } else {
            max_n = b;
            min_n = a;
        }

        if(max_n==min_n) cout << max_n*min_n*4 << endl;
        else if(min_n < max_n && 2*min_n >= max_n)  cout << (2*min_n)*(2*min_n) << endl;
        else cout << max_n*max_n << endl;
    }
    return 0;
}
