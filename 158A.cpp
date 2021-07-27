#include<iostream>
using namespace std;

int main(){
    int k, n;
    int scores[100];
    int counter=0, target=0;

    cin >> k >> n;

    for(int i=0; i<k; i++){
        cin >> scores[i];
        if(i+1 == n) target = scores[i];
    }

    for(int i=0; i<k; i++){
        if(scores[i]>=target && scores[i]>0) counter++;
    }
    cout << counter;

    return 0;
}
