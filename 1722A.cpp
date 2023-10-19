#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void resetMap(map<char, int>&m){
    for(auto itr=m.begin(); itr != m.end(); itr++){
        itr->second = 0;
    }
}

bool fillMap(map<char, int>&m, string name){
    for(int j=0; j<name.length(); j++){
        auto itr = m.find(name[j]);
        if(itr == m.end()){
            return false;
        }
        itr->second += 1;
    }
    return true;
}

bool checkMap(map<char, int>&m){
    for(auto itr = m.begin(); itr != m.end(); itr++){
        if(itr->second != 1){
            return false;
        }
    }
    return true;
}

int main(){
    map<char, int> m;
    m.insert({'T',0}); m.insert({'i',0}); m.insert({'m',0}); m.insert({'u',0}); m.insert({'r',0});
    int t, n;
    string name;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cin >> name;

        if(n != 5 || fillMap(m, name) == false){
            cout << "NO" << endl;
            resetMap(m);
            continue;
        }
        checkMap(m) ? cout << "YES" << endl : cout << "NO" << endl;
        resetMap(m);
    }
    return 0;
}
