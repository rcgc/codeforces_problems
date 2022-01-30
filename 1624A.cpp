#include<iostream>
#include<iterator>
#include<map>
using namespace std;

long int count_operations(map<long int, int>&m){
    long int acum=0;
    auto itr1 = m.rbegin();

    for(auto itr2=m.begin(); itr2!=m.end(); ++itr2){
        acum += (itr1->first - itr2->first);
        if(itr2 != m.begin()) itr1++;
    } return acum;
}

int main(){
    map<long int, int>m;
    int t, n;
    long int a;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> a;
            auto itr = m.find(a);
            if(itr != m.end()) itr->second++;
            else m.insert({a, 1});
        } cout << count_operations(m) << endl;
        m.clear();
    } return 0;
}
