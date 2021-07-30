#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> usbs;
    int n, m, temp_size, counter = 0;

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> temp_size;
        usbs.push(temp_size);
    }

    while(!usbs.empty()){
        if( m > 0 ){
            m = m - usbs.top();
            usbs.pop();
            counter++;
        }else {
            break;
        }
    }
    cout << counter;
    return 0;
}
