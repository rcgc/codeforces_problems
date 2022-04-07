#include<iostream>
using namespace std;

int main(){
    int k, n, x, arr[100], acum=0;
    cin >> n >> k >> x ;
    for(int i=0; i<n; i++) cin >> arr[n-i-1]; // fills reverse way
    for(int i=0; i<n; i++) i<k ? acum+=x : acum+=arr[i];
    cout << acum;
    return 0;
}
