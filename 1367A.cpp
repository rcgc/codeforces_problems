#include<iostream>
using namespace std;

int main(){
    int t;
    string s;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        for(int j=0; j<s.length(); j++){
            if(j % 4 == 0 || j % 4 == 1) cout << s[j];
            else if(j % 4 == 2 && s[j] != s[j-1]) cout << s[j];
            else if(j % 4 == 3 && s[j] != s[j+1]) cout << s[j];
        }
        cout << endl;
    }
    return 0;
}
