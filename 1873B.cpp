#include<iostream>
using namespace std;

int main(){
    int t, n, arr[9];
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }

        int maxValue = -1, minValue = 10;
        int maxIndex = -1, minIndex = -1;
        int zeroes = 0;

        for(int k=0; k<n; k++){
            if(arr[k] == 0){
                zeroes++;
            }
            if(arr[k] > maxValue){
                maxValue = arr[k];
                maxIndex = k;
            }
            if(arr[k] < minValue){
                minValue = arr[k];
                minIndex = k;
            }
        }
        if(zeroes >= 2){
            cout << 0 << endl;
            continue;
        }

        arr[minIndex] += 1;
        int acum=1;
        for(int k=0; k<n; k++){
            acum*=arr[k];
        }
        cout << acum << endl;
    }
    return 0;
}
