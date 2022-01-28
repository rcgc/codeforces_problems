#include<iostream>
using namespace std;

int main(){
    int m[30][2], n, c=0;
    cin >> n;
    for(int i=0; i<n; i++) cin >> m[i][0] >> m[i][1];

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(m[i][0] == m[j][1] && m[i][1] == m[j][0]) c+=2;
            else if(m[i][0] == m[j][1] || m[i][1] == m[j][0]) c++;
        }
    } cout << c << endl;
    return 0;
}
