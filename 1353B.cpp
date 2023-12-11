#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

void compare_and_replace(int a[30], int b[30], int n, int k){
    for(int i=0, j=0; i<n; i++){
        if(k<=0) break;
        if(a[i]<b[j]){
            a[i] = b[j];
            j++;
            k--;
        }
    }
}

int main(){
    int t, n, k, a[30], b[30], sum=0;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n >> k;
        for(int j=0; j<n; j++) cin >> a[j];
        for(int j=0; j<n; j++) cin >> b[j];

        sort(a, a+n); // sort acending
        sort(b, b+n, greater<int>()); // sort descending

        compare_and_replace(a, b, n, k);
        cout << accumulate(a, a+n, sum) << endl;
    }
    return 0;
}
