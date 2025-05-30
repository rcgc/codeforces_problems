#include<iostream>
using namespace std;

int count_permutations(int n){
    int counter = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j==n) counter++;
        }
    }
    return counter;
}

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cout << count_permutations(n) << endl;
    }
    return 0;
}
