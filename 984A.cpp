#include<iostream>
#include<iterator>
#include<map>
using namespace std;

void remove_first(map<int, int> &m){
    for(auto itr = m.begin(); itr != m.end(); ++itr){
        itr->second--;
        if(itr->second == 0) m.erase(itr->first);
        break;
    }
}

void remove_last(map<int, int> &m){
    for(auto itr = m.rbegin(); itr != m.rend(); ++itr){
        itr->second--;
        if(itr->second == 0) m.erase(itr->first);
        break;
    }
}

int main(){
    map<int, int> m;
    int n, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        auto itr = m.find(a);
        if(itr == m.end()) m.insert({a,1});
        else itr->second++;
    }
    for(int i=0; i<n-1; i++) (i%2==0) ? remove_last(m) : remove_first(m);
    auto itr = m.begin();
    cout << itr->first << endl;
    return 0;
}
