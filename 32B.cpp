#include<iostream>
using namespace std;

int main(){
    string str;
    int i=0;
    cin >> str;
    while(i < str.length()){
        if(str[i]=='.'){
            cout << 0;
            i++;
        } else if(str[i]=='-' && str[i+1]=='.'){
            cout << 1 ;
            i+=2;
        } else if(str[i]=='-' && str[i+1]=='-'){
            cout << 2;
            i+=2;
        }
    } return 0;
}
