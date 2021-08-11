#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> welfare;
    int n, a, acum=0, maximum;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        welfare.push(a);
    }
    maximum=welfare.top();
    while(!welfare.empty()){
        acum+= maximum-welfare.top();
        welfare.pop();
    }
    cout << acum;
    return 0;
}
