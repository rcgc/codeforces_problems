#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, alice=0, bob=0;
    cin >> t;
    for(int i=0; i<t; i++){
        int arr[100];
        cin >> n;
        for(int j=0; j<n; j++) cin >> arr[j];

        //sort array descending way
        sort(arr, arr + n, greater<int>());

        for(int j=0; j<n; j++){
            if(bob > alice) alice += arr[j];
            else bob += arr[j];
        }
        alice == bob ? cout << "YES" << endl : cout << "NO" << endl;
        alice = bob = 0;
    }
    return 0;
}
