#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x>y+z) cout << "+";
    else if (y>x+z) cout << "-";
    else if(x == y && z==0) cout << "0";
    else cout << "?";
    return 0;
}
