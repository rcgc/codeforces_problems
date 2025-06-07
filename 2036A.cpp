#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t, n, notes[50];
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> notes[j];
        }

        bool isPerfect = true;
        for(int j=1; j<n; j++){
            int interval = abs(notes[j] - notes[j - 1]);
            if (interval != 5 && interval != 7) {
                isPerfect = false;
                break;
            }
        }
        cout << (isPerfect ? "YES" : "NO") << endl;
    }
    return 0;
}
