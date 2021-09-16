#include<iostream>
using namespace std;

int main(){
    int n, index, p[100];
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> index;
        p[index] = i;
    }
    for(int i=1; i<=n; i++) cout << p[i] << " ";
    return 0;
}
