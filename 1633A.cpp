#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        (n%10 - n%7) >= 0 ? cout << n-n%7 << endl : cout << n+(7-n%7) << endl;
    }
    return 0;
}
