#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int find_max_first(map<int, int> &m){
    int max_first = 0, max_second = 0;

    for(auto itr = m.begin(); itr != m.end(); itr++){
        if(itr->second > max_second){
            max_first = itr->first;
            max_second = itr->second;
        }
    } return max_first;
}

int main(){
    map<int, int> m;
    m.insert({1,0});    m.insert({2,0});    m.insert({3,0});
    int n, a, max_first, acum = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        auto itr = m.find(a);
        itr->second+=1;
    }
    max_first = find_max_first(m);

    for(auto itr = m.begin(); itr != m.end(); itr++){
        if(itr->first != max_first){
            acum += itr->second;
        }
    } cout << acum;
    return 0;
}
