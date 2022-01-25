#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, a, cops=0, unsolved=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a<0 && cops==0) unsolved+=abs(a);
        else if(a>0) cops+=a;
        else if(a<0 && cops!=0) cops--;
    } cout << unsolved << endl;
    return 0;
}
