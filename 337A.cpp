#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, arr[50], mini=1000;
    cin >> n >> m;
    for(int i=0; i<m; i++) cin >> arr[i];
    sort(arr, arr+m);
    for(int i=0; i<=m-n; i++) arr[i+n-1]-arr[i] < mini ? mini = arr[i+n-1]-arr[i] : mini=mini;
    cout << mini;
    return 0;
}
