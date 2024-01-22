#include<iostream>
using namespace std;

int main(){
    int t, n, a, mihai = 0, bianca = 0;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j = 0; j<n; j++){
            cin >> a;
            if(a%2 == 0) mihai += a;
            else bianca += a;
        }
        mihai > bianca ? cout << "YES\n" : cout << "NO\n";
        mihai = 0;
        bianca = 0;
    }
    return 0;
}
