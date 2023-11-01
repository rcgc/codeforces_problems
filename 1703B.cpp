#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void init_map(map<char, bool>&m){
    for(int i=65; i<=90; i++) m.insert({i, false});
}

void reset_map(map<char, bool>&m){
    for(auto itr = m.begin(); itr != m.end(); itr++) itr->second=false;
}

int main(){
    map<char, bool>m;
    int t, n, counter=0;
    string str;

    init_map(m);

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> str;
        for(int j=0; j<n; j++){
            auto itr = m.find(str[j]);
            if(itr->second == false){
                counter+=2;
                itr->second = true;
            }else {
                counter++;
            }
        }
        cout << counter << endl;
        counter=0;
        reset_map(m);
    }
    return 0;
}
