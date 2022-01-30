#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int t, arr[3], n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr+3);
        n-=(arr[2]-arr[1]);
        n-=(arr[2]-arr[0]);
        if(n<0) cout << "NO" << endl;
        else if(n%3==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    } return 0;
}
