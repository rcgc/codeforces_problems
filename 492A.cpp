#include<iostream>
using namespace std;

int main(){
    int n, i;
    long arr[10001];

    cin >> n;
    for(i=0; i<=9999; i++){ arr[i]= (i+1)*(i+2)/2; }

    for(i=0; i<=9999; i++){
        n = n-arr[i];
        if(n==0){
            cout << i+1 << endl;
            break;
        } if(n<0){
            cout << i << endl;
            break;
        }
    } return 0;
}
