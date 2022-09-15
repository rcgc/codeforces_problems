#include<iostream>
using namespace std;

bool check_string(string s){
    if(s[0]!='Y' && s[0]!='y') return false;
    if(s[1]!='E' && s[1]!='e') return false;
    if(s[2]!='S' && s[2]!='s') return false;
    return true;
}

int main(){
    int t;
    string s;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        check_string(s) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
