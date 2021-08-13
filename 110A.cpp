#include<iostream>
#include<string>
using namespace std;

typedef unsigned long long ull;
int main(){
    string n;
    int counter=0;
    cin >> n;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='4' || n[i]=='7') counter++;
    }
    if(counter!=0 && (counter==4 || counter==7)) cout << "YES";
    else cout << "NO";
    return 0;
}
