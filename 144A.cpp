#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, a, min_value=101, max_value=1, min_index=0, max_index=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a > max_value){
            max_value=a;
            max_index=i;
        }
        if(a <= min_value){
            min_value=a;
            min_index=i;
        }
    } max_index > min_index ? cout << (max_index-1)+(n-min_index)-1 : cout << (max_index-1)+(n-min_index);
    return 0;
}
