#include<iostream>
using namespace std;

int main(){
    int t, x, y, n, ans;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x >> y >> n;
        ans = n-(n%x)+y;
        if(ans > n) cout << n-(n%x)-(x-y) << endl;
        else cout << ans << endl;
    }
    return 0;
}
