#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, arr[100];
    bool flag = false;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;

        for(int j=0; j<n; j++){
            cin >> arr[j];
        }

        if(n == 1){
            cout << "YES" << endl;
            continue;
        }

        sort(arr, arr + n);

        for(int k=0; k<n-1; k++){
            if(arr[k]-arr[k+1]==0){
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if(flag == false) {
            cout << "YES" << endl;
        }
        flag = false;
    }
    return 0;
}
