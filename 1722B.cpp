#include<iostream>
using namespace std;

int main(){
    int t, n;
    string s1, s2;
    bool flag = true;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> s1 >> s2;
        for(int j=0; j<n; j++){
            if(s1[j] == 'R' && s2[j]!='R' || s1[j]!='R' && s2[j]=='R'){
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
        flag = true;
    }
    return 0;
}
