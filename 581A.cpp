#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a, b, max_n, min_n;

    cin >> a >> b;
    max_n = max(a, b);
    min_n = min(a, b);

    cout << min_n << " " << (max_n-min_n)/2;
    return 0;
}
