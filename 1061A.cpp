#include<iostream>
using namespace std;

int main(){
    int n, s, acum=0;
    cin >> n >> s;
    if(s%n==0) acum+=s/n;
    else acum+=(s/n)+1;
    cout << acum;
    return 0;
}
