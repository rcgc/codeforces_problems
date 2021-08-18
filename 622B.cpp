#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int h, m, a, extra_m=0, extra_h=0;
    string time, aux="";
    cin >> time >> a;

    aux+=time[0];
    aux+=time[1];
    h = stoi(aux);

    aux="";

    aux += time[3];
    aux += time[4];
    m = stoi(aux);

    if(a/60!=0){
        extra_m = a%60;
        extra_h = a/60;
    }else { extra_m = a; }

    if(m + extra_m >= 60){
        extra_h += (m + extra_m)/60;
        m = (m + extra_m)%60;
    }else { m += extra_m; }

    if( h + extra_h >= 24){ h = (h + extra_h)%24; }
    else { h += extra_h; }

    if(h<10 && m<10) cout << "0" << h << ":" << "0" << m;
    else if (h<10 && m>9) cout << "0" << h << ":" << m;
    else if (h>9 && m<10) cout << h << ":" << "0" << m;
    else cout << h << ":" << m;
    return 0;
}
