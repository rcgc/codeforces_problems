#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int hours = a;    // candles you start with = hours of light
    int rem = a;      // rem = burnt candles

    while(rem >= b){
        int newCandles = rem/b;
        hours += newCandles;

        rem = newCandles + (rem % b);
    }
    cout << hours << endl;
    return 0;
}
