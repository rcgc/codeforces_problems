#include<iostream>
using namespace std;

int find_different(int n, int arr[100]){
    if(arr[0]!=arr[1] && arr[0]!=arr[2]) return 1;
    if(arr[1]!=arr[0] && arr[1]!=arr[2]) return 2;
    if(arr[2]!=arr[0] && arr[2]!=arr[1]) return 3;

    for(int i=3; i<n; i++){ if(arr[i] != arr[i-1]) return i+1; }
    return -1;
}

int main(){
    int t, n, arr[100];
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){ cin >> arr[j]; }
        cout << find_different(n, arr) << endl;
    } return 0;
}
