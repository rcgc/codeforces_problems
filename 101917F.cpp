#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    getchar();

    for(int i=0; i<n; i++){
        getline(cin, s);

        if(s.size() == 1){
            cout << 1 << endl;
            continue;
        }
        s.erase(s.begin());
        s.erase(s.begin());

        int a = stoi(s);
        int x = 1;
        for(int j=1; j <= s.size(); j++) x *= 10;
        cout << x/__gcd(x,a) << endl;
    }
    return 0;
}
