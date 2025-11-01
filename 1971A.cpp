#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t, x, y;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x >> y;
        cout << min(x, y) << " " << max(x,y) << endl;
    }
    return 0;
}
