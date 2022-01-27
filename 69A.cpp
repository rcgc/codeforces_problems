#include<iostream>
using namespace std;

bool check_rows(int m[100][3], int n){
    for(int i=0; i<n; i++) if(m[i][0]+m[i][1]+m[i][2] != 0) return false;
    return true;
}

bool check_cols(int m[100][3], int n){
    for(int i=0; i<3; i++){
        int acum = 0;
        for(int j=0; j<n; j++) acum+= m[j][i];
        if(acum != 0) return false;
    } return true;
}

int main(){
    int m[100][3], n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> m[i][0] >> m[i][1] >> m[i][2];
    ( check_rows(m, n) || check_cols(m, n) ) ? cout << "YES" : cout << "NO";
    return 0;
}
