#include<iostream>
using namespace std;

int main(){
    string result = "EASY";
    int n, aux;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> aux;
        if(aux==1) result = "HARD";
    }
    cout << result;
    return 0;
}
