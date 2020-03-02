#include <iostream>
using namespace std;
int main(){
    int n, last(0), current, maxi(1), counter(1), flag(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> current;
        if(i>0){
            if(current==last+1) counter++;
            else {counter=0; flag=1;}
            if(counter>maxi) maxi = counter;
        }last=current;
    }
    if(flag==0) cout << maxi-1; //If all are consecutive
    else if(maxi%2==0) cout << maxi-2; //Odd consecutive
    else cout << maxi-1; //Even consecutive
    return 0;
}
