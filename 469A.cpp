#include<iostream>
#include<iterator>
#include<map>
using namespace std;

void initialize_map(map<int, int> &m){
    for(int i=1; i<=100; i++) m.insert({i,0});
}

int main(){
    int n, p, a;
    map<int, int> m;
    initialize_map(m);

    cin >> n >> p;
    for(int i=0; i<p; i++){
        cin >> a;
        auto it = m.find(a);
        it->second++;
    }

    cin >> p;
    for(int i=0; i<p; i++){
        cin >> a;
        auto it = m.find(a);
        it->second++;
    }

    for(auto it = m.begin(); it != m.end(); ++it){
        if(it->first == n && it->second > 0){ // Successful condition
            cout << "I become the guy." << endl;
            break;
        }
        if(it->first <= n && it->second <= 0){ // Non-successful condition
            cout << "Oh, my keyboard!" << endl;
            break;
        }
    } return 0;
}
