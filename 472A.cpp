#include<iostream>
using namespace std;

void solv(bool *mark){
    for(long long i = 2; i <=1000000; i++ ){
        if( mark[i] == 0 ){
            for(long long j = 2 * i; j <= 1000000; j += i ) mark[j] = 1;
        }
    }
}

int main(){
    bool *mark;
    mark = (bool *) malloc(1000001 * sizeof(bool));
    long long n;
    solv(mark);
    cin >> n;
    for(long long i = 4; i <= n - 4; i++){
        if(mark[i] == 1 && mark[n - i] == 1){
            cout << i << " " << n - i << endl;
            break;
        }
    }
    return 0;
}
