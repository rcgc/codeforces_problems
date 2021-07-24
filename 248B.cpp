#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int digitsInput = 0;
    int res = 100;
    int i = 0;

    cin >> digitsInput;
    if(digitsInput <=2){
        cout << "-1" << endl;
    } else if (digitsInput == 3){
        cout << "210" << endl;
    } else {
        for(i=0; i < digitsInput -3; i++){
            res = res * 10;
            res = res % 210;
        }
        res = 210 - res;
        if(res < 100){
            cout << "1";
            for(i=0; i< digitsInput -3; i++){
                cout << "0";
            }
            cout << res;
        } else {
            cout << "1";
            for(i=0; i< digitsInput -4; i++){
                cout << "0";
            }
            cout << res;
        }
    }
    return 0;
}
