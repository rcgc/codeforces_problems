#include<iostream>
using namespace std;

int main(){
    int n, counter =0;
    string s;
    cin >> n >> s;
    if(n==1) {
        cout << 0;
        return 0;
    }
    for(int i=1; i<n; i++) if(s[i-1]==s[i])counter++;
    cout << counter;
    return 0;
}
