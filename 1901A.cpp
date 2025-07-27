#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        int arr[n+2];
        for (int p=1; p<=n; p++){
            cin >> arr[p];
        }
        arr[0] = 0;
        arr[n+1] = x + (x - arr[n]);
        int ans = 0;

        for(int p = 1; p <= n+1; p++){
            int diff = arr[p] - arr[p-1];
            ans = (ans > diff) ? ans : diff;
        }
        cout << ans << endl;
    }
    return 0;
}
