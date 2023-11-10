#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, arr[3];
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3, greater<int>());
        arr[0] + arr[1] >= 10 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
