#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n, p, acum = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p;
        acum += p;
    }
    cout << setprecision(12) << acum/n;
}
