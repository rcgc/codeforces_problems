#include<iostream>
using namespace std;

int main(){
    int n, t;
    string line;
    cin >> n >> t >> line;

    if(n==1){
        cout << line << endl;
        return 0;
    }

    for(int i=0; i<t; i++){
        for(int j=0; j<line.length(); j++){
            if(line[j]=='B' && line[j+1]=='G'){
                line[j]='G';
                line[j+1]='B';
                j++;
            }
        }
    } cout << line << endl;
    return 0;
}
