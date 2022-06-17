#include<iostream>
#include<stdlib.h>
using namespace std;

bool compare(string str){
    int first=0, second=0;
    first = (int)str[0] + (int)str[1] + (int)str[2];
    second = (int)str[3] + (int)str[4] + (int)str[5];
    return first-second;
}

int main(){
    int t;
    string str;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> str;
        compare(str) ? cout << "NO" << endl : cout << "YES" << endl;
    } return 0;
}
