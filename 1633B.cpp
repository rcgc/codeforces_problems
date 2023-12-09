#include<iostream>
using namespace std;

int main(){
    int t, zeroes, ones;
    string str;
    cin >> t;
    for(int i=0; i<t; i++){
        zeroes = 0;
        ones = 0;
        cin >> str;
        for(int j=0; j<str.length(); j++){
            if(str[j] == '0') zeroes++;
            else ones++;
        }
        if(zeroes != ones) cout << min(zeroes, ones) << endl;
        else cout << zeroes-1 << endl;
    }
    return 0;
}
