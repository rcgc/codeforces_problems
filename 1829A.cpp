#include<iostream>
using namespace std;

int main(){
    int t, counter = 0;
    string target = "codeforces", s;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        for(int j=0; j<10; j++) if(s[j] != target[j]) counter++;
        cout << counter << endl;
        counter = 0;
    }
    return 0;
}
