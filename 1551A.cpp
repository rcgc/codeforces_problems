#include<iostream>
using namespace std;

int main(){
    int t;
    unsigned long long n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        (n%3==2) ? cout << n/3 << " " << n/3 + 1 << endl : cout << n/3 + n%3 << " " << n/3 << endl;
    } return 0;
}
