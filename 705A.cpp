#include<iostream>
using namespace std;

int main(){
    int n;
    string str = "I hate ";
    cin >> n;

    for(int i=2; i<=n; i++){
        if(i%2==0) str += "that I love ";
        else str += "that I hate ";
    } str += "it";
    cout << str;
    return 0;
}
