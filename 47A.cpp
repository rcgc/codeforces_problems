#include<iostream>
using namespace std;

int main(){
    int arr[500];
    int n;
    for (int i=0; i<500; i++) arr[i] = (i*(i+1))/2;

    cin >> n;
    for(int i=0; i<500; i++) {
        if(arr[i] == n) {
            cout << "YES";
            break;
        }else if(arr[i] > n){
            cout << "NO";
            break;
        }
    }
    return 0;
}
