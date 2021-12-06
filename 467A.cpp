#include<iostream>
using namespace std;
int main(){
    int n, p, q, counter=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p >> q;
        if(p+2<=q) counter++;
    }
    cout << counter << endl;
    return 0;
}
