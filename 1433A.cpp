#include<iostream>
using namespace std;

int main(){
    int t, x, counter=0;
    cin>> t;
    for(int i=0; i<t; i++){
        cin >> x;
        for(int j=1; j<=9; j++){
            if(j*1==x) {counter++; break;}
            else counter++;
            if(j*11==x) {counter+=2; break;}
            else counter+=2;
            if(j*111==x) {counter+=3; break;}
            else counter+=3;
            if(j*1111==x) {counter+=4; break;}
            else counter+=4;
        }
        cout << counter << endl;
        counter=0;
    }
    return 0;
}
