#include<iostream>
using namespace std;

int main(){
    int k, l, m, n, counter=0;
    long int d;
    cin >> k >> l >> m >> n >> d;

    if(k == 1 || l == 1 || m == 1 || n == 1){
        cout << d << endl;
        return 0;
    }

    for(int i=1; i<=d; i++){
        if(i%k == 0) counter++;
        else if(i%l == 0) counter++;
        else if(i%m == 0) counter++;
        else if(i%n == 0) counter++;
    } cout << counter << endl;
    return 0;
}
