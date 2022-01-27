#include<iostream>
using namespace std;

int main(){
    int c=1;
    string s;
    cin >> s;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
            c++;
            if(c>=7){
                cout << "YES" << endl;
                return 0;
            }
        } else c=1;
    } cout << "NO" << endl;
    return 0;
}
