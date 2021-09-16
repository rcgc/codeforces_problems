#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
    int t, n, arr[100];
    bool flag = true;

    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){ cin >> arr[i]; }

        sort(arr, arr+n);
        if( n == 1 ){
            cout << "YES" << endl;
            continue;
        }
        for(int j=1; j<n; j++){
            if( abs( arr[j]-arr[j-1] ) > 1 ){
                flag = false;
                break;
            }
        } flag ? cout << "YES" << endl : cout << "NO" << endl;
        flag = true;
    } return 0;
}
