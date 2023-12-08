#include<iostream>
using namespace std;

int main(){
    int t, n, a, acum=0;
    bool has_even = false, has_odd = false;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> a;
            acum += a;
            if (a%2 == 1) has_odd = true;
            else has_even = true;
        }
        (acum%2 == 1) || (has_odd && has_even) ? cout << "YES" << endl : cout << "NO" << endl;
        acum = 0;
        has_odd = false;
        has_even = false;
    }
    return 0;
}
