#include<iostream>
#include<algorithm>
using namespace std;

int how_many_winners(int a, int b, int c, int winner){
    int counter = 0;
    if(a==winner) counter++;
    if(b==winner) counter++;
    if(c==winner) counter++;
    return counter;
}

int main(){
    int a, b, c, t, winner;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b >> c;
        winner = max(a, max(b, c));

        if( how_many_winners(a, b, c, winner) == 1 ){
            a == winner ? cout << 0 << " "  : cout << winner-a+1 << " ";
            b == winner ? cout << 0 << " "  : cout << winner-b+1 << " ";
            c == winner ? cout << 0 << endl : cout << winner-c+1 << endl;
        } else {
            a == winner ? cout << 1 << " "  : cout << winner-a+1 << " ";
            b == winner ? cout << 1 << " "  : cout << winner-b+1 << " ";
            c == winner ? cout << 1 << endl : cout << winner-c+1 << endl;
        }
    } return 0;
}
