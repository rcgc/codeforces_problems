#include<iostream>
using namespace std;

int main(){
    int n, best, worst, counter=0, arr[1000];

    cin >> n;
    for (int i=0; i<n; i++) cin >> arr[i];

    best = arr[0];
    worst = arr[0];

    for (int i=0; i<n; i++){
        if (arr[i] > best){
            counter++;
            best = arr[i];
        }else if (arr[i] < worst){
            counter++;
            worst = arr[i];
        }
    }
    cout << counter << endl;
    return 0;
}
