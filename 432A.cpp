#include<iostream>
using namespace std;

int main(){
    int n, k, arr[2000], counter=0;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) if(arr[i] <= 5-k) counter++;
    cout << counter/3;
    return 0;
}
