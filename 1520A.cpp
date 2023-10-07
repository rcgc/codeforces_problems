#include<iostream>
#include<iterator>
#include<map>
using namespace std;

bool analyze_string(map<char, int> &m, string s, int n){
    char prev = s[0];

    for(int i=0; i < n; i++){
        auto itr = m.find(s[i]);

        if(s[i] != prev && itr != m.end()) return false;
        else if (itr == m.end()) m.insert({s[i], 1});
        else itr->second++;

        prev = s[i];
    }
    return true;
}

int main(){
    map<char, int> m;
    string str;
    int t, n;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cin >> str;

        analyze_string(m, str, n) ? cout << "YES" << endl : cout << "NO" << endl;
        m.clear();
    }
    return 0;
}
