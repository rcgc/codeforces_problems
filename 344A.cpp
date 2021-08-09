#include<iostream>
using namespace std;

int main(){
    string str1, str2;
    int n, counter=1;
    cin >> n;
    cin >> str1;
    for(int i=0; i<n-1; i++){
        cin >> str2;
        if(str1!=str2) counter++;
        str1=str2;
    }cout << counter;
    return 0;
}
