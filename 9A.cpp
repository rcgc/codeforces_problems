#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int w, y, d;
    cin >> w >> y;
    d = (6 - max(w, y))+1;
    cout << (d/__gcd(d,6)) << "/" << (6/__gcd(d,6));
    return 0;
}
