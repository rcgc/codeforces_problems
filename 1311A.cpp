#include<iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        if(a > b) ( (a-b) % 2 == 0) ? cout << 1 << endl : cout << 2 << endl;
        else if( b > a) ( (b-a) % 2 == 0) ? cout << 2 << endl : cout << 1 << endl;
        else cout << 0 << endl;
    } return 0;
}
