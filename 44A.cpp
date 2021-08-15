#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    string tree, color;
    int n, counter=0;
    map<string, int>leaves;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tree >> color;
        auto itr = leaves.find(tree+" "+color);
        if(itr == leaves.end()){
            leaves.insert({tree+" "+color,1});
            counter++;
        }
    } cout << counter;
    return 0;
}
