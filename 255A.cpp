#include<iostream>
using namespace std;

int main(){
    int n, a, chest=0, biceps=0, bak=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(i%3==0) chest+=a;
        else if(i%3==1) biceps+=a;
        else bak+=a;
    }
    if(chest > biceps && chest > bak) cout << "chest";
    else if (biceps > chest && biceps > bak) cout << "biceps";
    else cout << "back";
    return 0;
}
