#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n, temp, num1(0), num2(0);
    priority_queue<int> episodes;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> temp;
        episodes.push(temp);
    }
    if(episodes.top()!=n){ // special case: last episodes is missing
        cout << n;
        return 0;
    }
    while(!episodes.empty()){
        num1 = episodes.top();
        episodes.pop();
        num2 = episodes.top();
        if(num1!=num2+1){
            cout << num1-1;
            return 0;
        }
    } return 0;
}
