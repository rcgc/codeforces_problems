#include<iostream>
#include<algorithm>
using namespace std;

int getMinDifference(int arr[50], int n){
    int minDiff = 2000;
    for(int i=1; i<n; i++){
        if(arr[i] - arr[i - 1] < minDiff) minDiff = arr[i] - arr[i - 1];
    }
    return minDiff;
}

int main(){
    int t, n, minDiff;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;
        int arr[n];
        for(int j=0; j<n; j++) cin >> arr[j];
        sort(arr, arr + n);
        minDiff = getMinDifference(arr, n);
        cout << minDiff << endl;
    }
    return 0;
}
