#include<iostream>
using namespace std;

int main(){
    int n;
    string cad;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> cad;

        if(cad.size()<=10) cout << cad << endl;
        else cout << cad[0] << cad.size()-2 << cad[cad.size()-1] << endl;
    }

    return 0;
}
