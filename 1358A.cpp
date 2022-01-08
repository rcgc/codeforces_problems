#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, n, m;
    long long result;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n >> m;

        if( n%2 == 0 || m%2 == 0) result = ceil(n*m/2);
        else result = ceil(n*m/2)+1;
        cout << result << endl;
    }
    return 0;
}
