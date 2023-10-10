#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, n;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        if(n % 4 != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(int j=2; j<=n; j+=2){
                cout << j << " ";
            }
            for(int j=1; j<=n-1; j+=2){
                if(j == n-1) cout << j + 2*(n/4) << endl;
                else cout << j << " ";
            }
        }
    }
    return 0;
}
