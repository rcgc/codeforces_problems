#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        n % 2 == 0 ? cout << n/2 << endl : cout << (n-1)/2 << endl;
    }
    return 0;
}
