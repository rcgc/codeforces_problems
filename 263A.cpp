#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    char m[26];
    int row=0, col=0, counter = 0;

    for(int i=0; i<25; i++){
        cin >> m[i];
        if(m[i]=='1'){
            col = counter%5;
            row = counter/5;
        }
        counter ++;
    }
    cout << abs(col-2) + abs(row-2);
    return 0;
}

