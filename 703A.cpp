#include<iostream>
using namespace std;

int main(){
    int n, c, m, mishka=0, chris=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m >> c;
        if(c>m) chris++;
        if(c<m) mishka++;
    }
    if(mishka>chris) cout << "Mishka";
    else if (mishka<chris) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}
