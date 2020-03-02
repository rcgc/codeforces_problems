#include <iostream>
using namespace std;
int main(){
    int bills[5] = {100, 20, 10, 5, 1};
    int money, n=0, i=0;
    cin >> money;
    while (money!=0){
        n+=money/bills[i];
        money=money%bills[i];
        if(money!=0 && i<=4) i++;
    }cout << n;
    return 0;
}
