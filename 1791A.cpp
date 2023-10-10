#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void fill_map(map<char, int> &m, string str){
    for(int i=0; i < str.length(); i++){
        auto itr = m.find(str[i]);
        if(itr != m.end()) itr->second++;
        else m.insert({str[i], 1});
    }
}

int main(){
    map<char, int>m;
    int t;
    char ch;

    fill_map(m, "codeforces");

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> ch;
        auto itr = m.find(ch);
        itr != m.end() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
