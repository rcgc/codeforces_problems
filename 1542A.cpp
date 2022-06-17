#include<iostream>
using namespace std;

int main(){
    int t, n, even=0, odd=0, number;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<2*n ; j++){
            cin >> number;
            number%2==0 ? even++ : odd++;
        } even-odd == 0 ? cout << "Yes" << endl : cout << "No" << endl;
        even = 0;
        odd = 0;
    } return 0;
}
