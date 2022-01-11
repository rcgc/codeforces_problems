#include<iostream>
using namespace std;

int main(){
    int a, t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int even = 0, odd = 0;
        for(int j=0; j<n; j++){
            cin >> a;
            if(a%2 != j%2){
                if(a%2) odd++;
                else even++;
            }
        } even == odd ? cout << even << endl : cout << -1 << endl;
    } return 0;
}
